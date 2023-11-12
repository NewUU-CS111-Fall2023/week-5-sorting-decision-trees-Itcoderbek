#ifndef TASK_5_H
#define TASK_5_H

#include <iostream>
#include <vector>

class ColorInterpreter {
public:
    // Constructor
    ColorInterpreter();

    // Destructor
    ~ColorInterpreter();

    // Function to interpret and display the colors in a grid
    void interpretAndDisplayColors(const std::vector<std::vector<char>>& colorMatrix);

private:
    // Helper function to convert symbol to color
    std::string convertSymbolToColor(char symbol);
};

#endif // TASK_5_H
