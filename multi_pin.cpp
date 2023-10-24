#include "multi_pin.hpp"

Multi_Pin::Multi_Pin(uint pinNumber) : UniversalPin{pinNumber} {
}

Multi_Pin::operator int() const
{
     return this->pinNumber;
}


void Multi_Pin::pinMode(uint8_t mode)
{
    ::pinMode(this->pinNumber, mode);
}

uint8_t Multi_Pin::digitalRead() {
    return ::digitalRead(this->pinNumber);
}

void Multi_Pin::digitalWrite(uint8_t value) {
    ::digitalWrite(this->pinNumber, value);
}