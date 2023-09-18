#include "utils.hpp"

#include <fstream>
#include <iostream>

void logError(std::string message) {
    std::cerr << "Error: " << message << std::endl;
    exit(EXIT_FAILURE);
}

std::string readFile(std::string path) {
    std::string output, line;
    std::ifstream file(path);
    if (file.is_open()) {
        while (std::getline(file, line)) {
            output += line;
            output.push_back('\n');
        }
    }
    else 
        logError("Error occurred while trying to read the file.");
    return output;
}