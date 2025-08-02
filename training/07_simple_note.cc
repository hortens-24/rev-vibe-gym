#define PATH "./07_simple_note.txt"
#include <iostream>
#include <fstream>
#include <cstring>
#include <filesystem>

int main(int argc, char* argv[]) {
    if (argc < 2 || argc >= 4) {
        std::cerr << "invalid input. " << std::endl;
        return 1;
    }

    if (std::strcmp(argv[1], "add") == 0) {
        std::ofstream file(PATH, std::ios::app);
        if (file) file << argv[2] << std::endl;
        else {
            std::cerr << "Unexpected error has occured." << std::endl;
        }
    }
    else if (std::strcmp(argv[1], "list") == 0) {
        std::ifstream file(PATH);
        if (file) {
            std::string line;
            int count = 1;

            while (std::getline(file, line)) {
                std::cout << count << ": " << line << std::endl;
                ++count;
            }
        }
        else {
            std::cerr << PATH << " cannot be opened." << std::endl;
            if (!std::filesystem::exists(PATH)) {
                std::cerr << "    " << PATH << " doesn't exist" << std::endl;
            }
        }
    }
    else if (std::strcmp(argv[1], "clear") == 0) std::filesystem::remove(PATH);
    else {
        std::cerr << "invalid input.\nthis command can be used add/list/clear.\n";
    }
}