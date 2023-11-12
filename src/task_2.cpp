#include "task_2.h"

// Constructor
DenominationSorter::DenominationSorter() {
    // Initialization, if needed
}

// Destructor
DenominationSorter::~DenominationSorter() {
    // Cleanup, if needed
}

// Function to input coin and banknote denominations
void DenominationSorter::inputDenominations() {
    std::cout << "Enter the number of denominations: ";
    int numDenominations;
    std::cin >> numDenominations;

    for (int i = 0; i < numDenominations; ++i) {
        int denomination;
        std::cout << "Enter the denomination of coin/banknote " << i + 1 << ": ";
        std::cin >> denomination;
        denominations.push_back(denomination);
    }
}

// Function to perform Selection Sort on the denominations
void DenominationSorter::selectionSort() {
    int n = denominations.size();

    for (int i = 0; i < n - 1; ++i) {
        // Find the minimum element in the unsorted part
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (denominations[j] < denominations[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        std::swap(denominations[i], denominations[minIndex]);
    }
}

// Function to display the sorted denominations
void DenominationSorter::displaySortedDenominations() {
    std::cout << "\nSorted Denominations:\n";
    for (const auto& denomination : denominations) {
        std::cout << denomination << " ";
    }
    std::cout << "\n";
}
