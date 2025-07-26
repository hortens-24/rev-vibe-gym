#include "04_Greeter.h"
#include <iostream>

Greeter::Greeter(std::string adv_name) {
    name = adv_name;
}

void Greeter::greet() const{
    std::cout << "こんにちは、" << name << "!" << std::endl;
}