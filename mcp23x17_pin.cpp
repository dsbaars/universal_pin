#include "mcp23x17_pin.hpp"

std::mutex MCP23X17_Pin::mcpMutex;

MCP23X17_Pin::MCP23X17_Pin(MCP23017& mcp, uint pinNumber) : mcp(mcp), UniversalPin{pinNumber} {
    this->mcp = mcp;
}

void MCP23X17_Pin::pinMode(uint8_t mode)
{
    this->mcp.pinMode1(this->pinNumber, mode);
}

uint8_t MCP23X17_Pin::digitalRead() {
    std::lock_guard<std::mutex> lockMcp(MCP23X17_Pin::mcpMutex);

    uint8_t res = this->mcp.read1(this->pinNumber);
    return res;
}

void MCP23X17_Pin::digitalWrite(uint8_t value) {
    std::lock_guard<std::mutex> lockMcp(MCP23X17_Pin::mcpMutex);

    this->mcp.write1(this->pinNumber, value);
}