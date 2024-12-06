#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string userSentence;
    ofstream outputFile("sentence.txt");
    
    cout << "Enter a sentence: ";
    getline(cin, userSentence);
    
    outputFile << userSentence;
    outputFile.close();
    
    return 0;
}