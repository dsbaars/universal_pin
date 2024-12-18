#include "universal_pin.hpp"
#include "MCP23017.h"
#include <mutex>

class MCP23X17_Pin : public UniversalPin
{
public:
    static std::mutex mcpMutex;

    MCP23X17_Pin(MCP23017& mcp, uint pinNumber);
    void pinMode(uint8_t mode);
    uint8_t digitalRead();
    void digitalWrite(uint8_t value);

protected:
    MCP23017& mcp;
};

