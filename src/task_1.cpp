#include "task_1.h"

// Constructor
BookSorter::BookSorter() {
    // Initialization, if needed
}

// Destructor
BookSorter::~BookSorter() {
    // Cleanup, if needed
}

// Function to input book titles
void BookSorter::inputBookTitles() {
    std::cout << "Enter the number of books: ";
    int numBooks;
    std::cin >> numBooks;

    std::cin.ignore(); // Clear the input buffer

    for (int i = 0; i < numBooks; ++i) {
        std::string title;
        std::cout << "Enter the title of book " << i + 1 << ": ";
        std::getline(std::cin, title);
        bookTitles.push_back(title);
    }
}

// Function to perform Bubble Sort on the book titles
void BookSorter::bubbleSort() {
    int n = bookTitles.size();

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (bookTitles[j] > bookTitles[j + 1]) {
                // Swap the titles
                std::swap(bookTitles[j], bookTitles[j + 1]);
            }
        }
    }
}

// Function to display the sorted book titles
void BookSorter::displaySortedTitles() {
    std::cout << "\nSorted Book Titles:\n";
    for (const auto& title : bookTitles) {
        std::cout << title << "\n";
    }
}
