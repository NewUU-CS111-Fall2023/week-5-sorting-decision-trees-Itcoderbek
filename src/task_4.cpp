#include "task_4.h"

// Constructor
ElementCounter::ElementCounter() {
    // Initialization, if needed
}

// Destructor
ElementCounter::~ElementCounter() {
    // Cleanup, if needed
}

// Function to count elements meeting the criteria
int ElementCounter::countElements(const std::vector<int>& array) {
    int count = 0;
    int size = array.size();

    for (int i = 1; i < size - 1; ++i) {
        if (areAdjacentSmaller(array, i)) {
            count++;
        }
    }

    return count;
}

// Helper function to check if both adjacent neighbors are smaller
bool ElementCounter::areAdjacentSmaller(const std::vector<int>& array, int index) {
    return (array[index] > array[index - 1] && array[index] > array[index + 1]);
}
