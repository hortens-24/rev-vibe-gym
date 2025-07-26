#include "05_Counter.cc"
#include <iostream>

int main() {
    Counter c1 = Counter();
    Counter c2 = Counter();

    std::cout << c1.getValue() << std::endl;
    std::cout << c2.getValue() << std::endl;

    c1.inc();
    c2.reset();

    std::cout << c1.getValue() << std::endl;
    std::cout << c2.getValue() << std::endl;

    c1.inc();
}