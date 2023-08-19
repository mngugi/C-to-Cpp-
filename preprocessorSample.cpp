
#include <iostream>
#include <fstream>
#include <string>
#include <map>

std::map<std::string, std::string> macroDefinitions;

void processLine(std::string& line) {
    size_t pos = line.find("#");
    if (pos == std::string::npos) {
        return;
    }

    std::string directive = line.substr(pos);
    if (directive.find("#include") == 0) {
        std::string includeFile = directive.substr(directive.find_first_of("\"<") + 1, directive.find_last_of("\">") - directive.find_first_of("\"<") - 1);
        std::ifstream file(includeFile);
        if (file.is_open()) {
            std::string includeContent((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
            processLine(includeContent);
            line = line.substr(0, pos) + includeContent;
        } else {
            std::cerr << "Error: Could not open file " << includeFile << std::endl;
        }
    } else if (directive.find("#define") == 0) {
        size_t spacePos = directive.find(" ");
        if (spacePos != std::string::npos) {
            std::string macroName = directive.substr(spacePos + 1, directive.find_first_of(" \t", spacePos + 1) - spacePos - 1);
            std::string macroValue = directive.substr(directive.find_first_not_of(" \t", spacePos + 1));
            macroDefinitions[macroName] = macroValue;
            line = "";
        }
    }
}

void processFile(const std::string& filename) {
    std::ifstream inputFile(filename);
    if (inputFile.is_open()) {
        std::string line;
        while (std::getline(inputFile, line)) {
            processLine(line);
            std::cout << line << std::endl;
        }
    } else {
        std::cerr << "Error: Could not open file " << filename << std::endl;
    }
}

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <input_file>" << std::endl;
        return 1;
    }

    std::string inputFilename(argv[1]);
    processFile(inputFilename);

    return 0;
}
