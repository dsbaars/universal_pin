#include "native_pin.hpp"

Native_Pin::Native_Pin(uint pinNumber) : UniversalPin{pinNumber} {
}

Native_Pin::operator int() const
{
     return this->pinNumber;
}


void Native_Pin::pinMode(uint8_t mode)
{
    ::pinMode(this->pinNumber, mode);
}

uint8_t Native_Pin::digitalRead() {
    uint8_t res = ::digitalRead(this->pinNumber);

    //     Serial.print("Native read from ");
    // Serial.print(this->pinNumber);
    // Serial.print(" value ");
    // Serial.println(res);

    return res;
}

void Native_Pin::digitalWrite(uint8_t value) {
    ::digitalWrite(this->pinNumber, value);

    // Serial.print("Native write to ");
    // Serial.print(this->pinNumber);
    // Serial.print(" value ");
    // Serial.println(value);
}