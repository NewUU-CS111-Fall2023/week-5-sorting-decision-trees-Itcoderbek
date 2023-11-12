/*
 * Author:
 * Date:
 * Name:
 */

#include "task_1.h"
#include "task_2.h"
#include "task_3.h"
#include "task_4.h"
#include "task_5.h"

int main() {
    // Task 1
    BookSorter bookSorter;
    bookSorter.inputBookTitles();
    bookSorter.bubbleSort();
    bookSorter.displaySortedTitles();

    // Task 2
    DenominationSorter denominationSorter;
    denominationSorter.inputDenominations();
    denominationSorter.selectionSort();
    denominationSorter.displaySortedDenominations();

    // Task 3
    SoldierRearranger soldierRearranger;
    std::vector<std::string> soldiers = {"A", "B", "C", "D", "E", "F"};
    soldierRearranger.rearrangeSoldiers(soldiers);
    std::cout << "Rearranged Soldiers: ";
    for (const auto& soldier : soldiers) {
        std::cout << soldier << " ";
    }
    std::cout << "\n";

    // Task 4
    ElementCounter elementCounter;
    std::vector<int> numbers = {5, 3, 7, 1, 8, 2, 6};
    int count = elementCounter.countElements(numbers);
    std::cout << "Count of elements meeting the criteria: " << count << "\n";

    // Task 5
    ColorInterpreter colorInterpreter;
    std::vector<std::vector<char>> colorMatrix = {
        {'b', 'y', 'w'},
        {'y', 'w', 'b'},
        {'w', 'b', 'y'}
    };
    std::cout << "Color Interpretation:\n";
    colorInterpreter.interpretAndDisplayColors(colorMatrix);

    return 0;
}

