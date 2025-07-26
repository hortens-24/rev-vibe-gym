#include "05_Counter.h"
#include <cassert>

Counter::Counter() {
    value = 0;
}

void Counter::inc() {
    value++;
    assert(getValue() == 1);
}

void Counter::reset() {
    value = 0;
    assert(getValue() == 0);
}

unsigned int Counter::getValue() const {
    return value;
}