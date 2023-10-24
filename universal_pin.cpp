#include "universal_pin.hpp"

UniversalPin::UniversalPin(uint pinNumber) {
    this->pinNumber = pinNumber;
}

int UniversalPin::toInt() {
    return this->pinNumber;
}

UniversalPin::operator int() const
{
     return this->pinNumber;
}

UniversalPin::operator uint8_t() const
{
     return this->pinNumber;
}