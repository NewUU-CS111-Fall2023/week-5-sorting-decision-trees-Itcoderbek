#include "task_5.h"

// Constructor
ColorInterpreter::ColorInterpreter() {
    // Initialization, if needed
}

// Destructor
ColorInterpreter::~ColorInterpreter() {
    // Cleanup, if needed
}

// Function to interpret and display the colors in a grid
void ColorInterpreter::interpretAndDisplayColors(const std::vector<std::vector<char>>& colorMatrix) {
    for (const auto& row : colorMatrix) {
        for (char symbol : row) {
            std::string color = convertSymbolToColor(symbol);
            std::cout << color << " ";
        }
        std::cout << "\n";
    }
}

// Helper function to convert symbol to color
std::string ColorInterpreter::convertSymbolToColor(char symbol) {
    switch (symbol) {
        case 'b':
            return "Blue";
        case 'y':
            return "Yellow";
        case 'w':
            return "White";
        default:
            return "Unknown";
    }
}
