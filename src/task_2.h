#ifndef TASK_2_H
#define TASK_2_H

#include <iostream>
#include <vector>

class DenominationSorter {
public:
    // Constructor
    DenominationSorter();

    // Destructor
    ~DenominationSorter();

    // Function to input coin and banknote denominations
    void inputDenominations();

    // Function to perform Selection Sort on the denominations
    void selectionSort();

    // Function to display the sorted denominations
    void displaySortedDenominations();

private:
    std::vector<int> denominations;
};

#endif // TASK_2_H
