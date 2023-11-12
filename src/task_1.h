/*
 * Author:
 * Date:
 * Name:
 */
#ifndef TASK_1_H
#define TASK_1_H

#include <iostream>
#include <vector>

class BookSorter {
public:
    // Constructor
    BookSorter();

    // Destructor
    ~BookSorter();

    // Function to input book titles
    void inputBookTitles();

    // Function to perform Bubble Sort on the book titles
    void bubbleSort();

    // Function to display the sorted book titles
    void displaySortedTitles();

private:
    std::vector<std::string> bookTitles;
};

#endif // TASK_1_H
