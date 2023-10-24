# Universal Pin Library

Unified interface C++ library to talk to pins regardless if they are native or behind port expanders like the MCP23017.

```cpp
// MCP23017
#include <mcp23x17_pin.hpp>
Adafruit_MCP23X17 mcp;

MCP23X17_Pin EPD_DC = MCP23X17_Pin(mcp, 7); 

// Native pin
#include <native_pin.hpp>
Native_Pin EPD_DC = Native_Pin(14);
```