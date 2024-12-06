#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdio>

void multiChatCompletion() {
    const std::string ollamaServerUrl = "http://localhost:8080"; // Replace with your Ollama server URL and port
    const std::string model = "llama-3.1-8b"; // Replace with the model name you are using

    // Load system prompt
    std::ifstream sysPromptFile("./systemPrompt.txt");
    if (!sysPromptFile) {
        std::cerr << "Error: Could not open systemPrompt.txt" << std::endl;
        return;
    }
    std::stringstream sysPromptStream;
    sysPromptStream << sysPromptFile.rdbuf();
    std::string sysPrompt = sysPromptStream.str();

    for (int i = 0; i < 10; ++i) {
        std::string command = "curl -X POST -H \"Content-Type: application/json\" --data '{\"model\": \"" + model + "\", \"prompt\": \"" + sysPrompt + "\", \"max_tokens\": 150, \"temperature\": 0.5}' " + ollamaServerUrl + "/generate";
        std::cout << "Executing command: " << command << std::endl;

        FILE* pipe = popen(command.c_str(), "r");
        if (!pipe) {
            std::cerr << "Error: Could not open pipe" << std::endl;
            return;
        }

        char buffer[1024];
        std::string result;
        while (fgets(buffer, sizeof(buffer), pipe) != nullptr) {
            result += buffer;
        }
        pclose(pipe);

        // Parse the output
        std::stringstream outputStream(result);
        std::string output;
        std::getline(outputStream, output); // Extract the completion from the JSON response

        // Save the output
        std::ofstream outputFile("./output/output-" + std::to_string(i) + ".md");
        if (!outputFile) {
            std::cerr << "Error: Could not open output file" << std::endl;
            return;
        }
        outputFile << output;

        // Reinput the output as the new system prompt
        sysPrompt = output;
    }
}

int main() {
    multiChatCompletion();
    return 0;
}