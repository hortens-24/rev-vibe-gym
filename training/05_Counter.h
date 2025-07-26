#pragma once

class Counter {
    private:
        unsigned int value;

    public:
        Counter();
        void inc();
        void reset();
        unsigned int getValue() const;
};