#include "universal_pin.hpp"
#include <Adafruit_MCP23X17.h>
#include <mutex>

class MCP23X17_Pin : public UniversalPin
{
public:
    static std::mutex mcpMutex;

    MCP23X17_Pin(Adafruit_MCP23XXX& mcp, uint pinNumber);
    void pinMode(uint8_t mode);
    uint8_t digitalRead();
    void digitalWrite(uint8_t value);

protected:
    Adafruit_MCP23XXX& mcp;
};

