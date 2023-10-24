#pragma once
#include <Arduino.h>

class UniversalPin
{
public:
    UniversalPin(uint pinNumber);
    virtual void pinMode(uint8_t mode) = 0;
    virtual uint8_t digitalRead() = 0;
    virtual void digitalWrite(uint8_t value) = 0;
    virtual int toInt();
    explicit operator int() const;
    explicit operator uint8_t() const;

protected:
    uint pinNumber;
};