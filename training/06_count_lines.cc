#include <iostream>
#include <fstream>
#include <filesystem>

int main(int argc, char* argv[]) {
    int total = 0;
    for (int i = 1; i < argc; ++i) {
        int count = 0;
        std::ifstream file(argv[i]);
        if (!file) {
            std::cerr << argv[i] << " cannot be opened." << std::endl;
            if (!std::filesystem::exists(argv[i])) {
                std::cerr << "    " << argv[i] << " doesn't exist" << std::endl;
            }
            continue;
        }
        std::string line;

        while (std::getline(file, line)) {
            ++count;
        }
        std::cout << argv[i] << ": " << count << std::endl;
        total += count;
    }
    std::cout << "Total: " << total << std::endl;

    return 0;
}