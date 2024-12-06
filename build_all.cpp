#include <iostream>
#include <string>
#include <filesystem>
#include <vector>
#include <cstdlib>

namespace fs = std::filesystem;

std::string find_main_source(const std::string& dir) {
    // Check for common main source file names
    std::vector<std::string> possible_names = {
        "/main.cpp",
        "/lab_one.cpp",
        "/lab_2.cpp",
        "/lab_3.cpp"
    };
    
    for (const auto& name : possible_names) {
        if (fs::exists(dir + name)) {
            return dir + name;
        }
    }
    
    // If no known names found, use the first .cpp file
    for (const auto& file : fs::directory_iterator(dir)) {
        if (file.path().extension() == ".cpp") {
            return file.path().string();
        }
    }
    
    return "";
}

bool compile_project(const std::string& dir) {
    std::string unix_cmd;
    std::string windows_cmd;
    
    // Check if there are multiple cpp files
    std::vector<std::string> cpp_files;
    for (const auto& file : fs::directory_iterator(dir)) {
        if (file.path().extension() == ".cpp") {
            cpp_files.push_back(file.path().string());
        }
    }
    
    // If makefile exists, use make
    if (fs::exists(dir + "/makefile") || fs::exists(dir + "/Makefile")) {
        unix_cmd = "cd " + dir + " && make";
        windows_cmd = unix_cmd; // Assuming make is available on Windows
    }
    // If multiple cpp files exist, compile them all
    else if (cpp_files.size() > 1) {
        // Unix build command
        unix_cmd = "g++ -std=c++17";
        for (const auto& file : cpp_files) {
            unix_cmd += " " + file;
        }
        unix_cmd += " -o " + dir + "/lab";
        
        // Windows build command with full static linking
        windows_cmd = "x86_64-w64-mingw32-g++ -std=c++17 -static";
        for (const auto& file : cpp_files) {
            windows_cmd += " " + file;
        }
        windows_cmd += " -o " + dir + "/lab.exe";
    }
    // Otherwise find and compile the main source file
    else {
        std::string main_source = find_main_source(dir);
        if (main_source.empty()) {
            std::cout << "No source files found in " << dir << "\n";
            return false;
        }
        
        // Unix build command
        unix_cmd = "g++ -std=c++17 " + main_source + " -o " + dir + "/lab";
        
        // Windows build command with full static linking
        windows_cmd = "x86_64-w64-mingw32-g++ -std=c++17 -static " + 
                     main_source + " -o " + dir + "/lab.exe";
    }
    
    std::cout << "Compiling " << dir << "...\n";
    
    // Execute Unix build
    std::cout << "Unix build command: " << unix_cmd << "\n";
    int unix_result = system(unix_cmd.c_str());
    
    // Execute Windows build
    std::cout << "Windows build command: " << windows_cmd << "\n";
    int windows_result = system(windows_cmd.c_str());
    
    return unix_result == 0 && windows_result == 0;
}

int main() {
    std::vector<std::string> failed_builds;
    int total_projects = 0;
    int successful_builds = 0;

    // Iterate through all directories
    for (const auto& entry : fs::directory_iterator(".")) {
        if (fs::is_directory(entry) && entry.path().filename().string().find("lab") != std::string::npos) {
            std::string dir_path = entry.path().string();
            
            // Skip if no cpp files exist
            bool has_cpp = false;
            for (const auto& file : fs::directory_iterator(dir_path)) {
                if (file.path().extension() == ".cpp") {
                    has_cpp = true;
                    break;
                }
            }
            
            if (has_cpp) {
                total_projects++;
                if (compile_project(dir_path)) {
                    successful_builds++;
                    std::cout << "Successfully built " << dir_path << " (Unix and Windows)\n";
                } else {
                    failed_builds.push_back(dir_path);
                    std::cout << "Failed to build " << dir_path << "\n";
                }
            }
        }
    }

    // Print summary
    std::cout << "\nBuild Summary:\n";
    std::cout << "Total projects: " << total_projects << "\n";
    std::cout << "Successful builds: " << successful_builds << "\n";
    std::cout << "Failed builds: " << failed_builds.size() << "\n";

    if (!failed_builds.empty()) {
        std::cout << "\nFailed projects:\n";
        for (const auto& project : failed_builds) {
            std::cout << "- " << project << "\n";
        }
    }

    return failed_builds.empty() ? 0 : 1;
}
