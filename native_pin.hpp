#include "universal_pin.hpp"

class Native_Pin : public UniversalPin 
{
    public:
        Native_Pin(uint pinNumber);
        explicit operator int() const;
        void pinMode(uint8_t mode);
        uint8_t digitalRead();
        void digitalWrite(uint8_t value);
};