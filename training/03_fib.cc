#include <iostream>

unsigned long long fib(unsigned int n);

int main() {
    unsigned int n;

    for (;;) {
        std::cout << "n? "; std::cin >> n;
        if (std::cin.fail()) {
            std::cout << "invalid input." << std::endl;
            std::cin.clear();
            std::cin.ignore(256, '\n');
            continue;
        }
        else if (n > 93) {
            std::cout << "n must be bigger than 0 and less than 93." << std::endl;
            std::cin.clear();
            continue;
        }
        break;
    }
    std::cout << "F(n) = " << fib(n) << std::endl;
    return 0;
}

unsigned long long fib(unsigned int n) {
    unsigned long long preprev = 0l;
    unsigned long long prev = 1l;
    unsigned long long tmp;

    if (n == 0) return preprev;
    else if (n == 1) return prev;
    else {
        for (unsigned int i = 0; i < n-1; ++i) {
            tmp = preprev + prev;
            preprev = prev;
            prev = tmp;
        }
        return tmp;
    }
}