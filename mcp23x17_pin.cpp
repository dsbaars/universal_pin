#include "mcp23x17_pin.hpp"

MCP23X17_Pin::MCP23X17_Pin(Adafruit_MCP23XXX& mcp, uint pinNumber) : mcp(mcp), UniversalPin{pinNumber} {
    this->mcp = mcp;
}

void MCP23X17_Pin::pinMode(uint8_t mode)
{
    this->mcp.pinMode(this->pinNumber, mode);
}

uint8_t MCP23X17_Pin::digitalRead() {
    uint8_t res = this->mcp.digitalRead(this->pinNumber);
    return res;
}

void MCP23X17_Pin::digitalWrite(uint8_t value) {
    this->mcp.digitalWrite(this->pinNumber, value);
}