#ifndef TASK_4_H
#define TASK_4_H

#include <iostream>
#include <vector>

class ElementCounter {
public:
    // Constructor
    ElementCounter();

    // Destructor
    ~ElementCounter();

    // Function to count elements meeting the criteria
    int countElements(const std::vector<int>& array);

private:
    // Helper function to check if both adjacent neighbors are smaller
    bool areAdjacentSmaller(const std::vector<int>& array, int index);
};

#endif // TASK_4_H
