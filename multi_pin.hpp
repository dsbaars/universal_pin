#include "universal_pin.hpp"

class Multi_Pin : public UniversalPin 
{
    public:
        Multi_Pin(uint pinNumber);
        explicit operator int() const;
        void pinMode(uint8_t mode);
        uint8_t digitalRead();
        void digitalWrite(uint8_t value);
    protected:
        UniversalPin* pins[];
};              