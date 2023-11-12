#include "task_3.h"

// Constructor
SoldierRearranger::SoldierRearranger() {
    // Initialization, if needed
}

// Destructor
SoldierRearranger::~SoldierRearranger() {
    // Cleanup, if needed
}

// Function to rearrange soldiers according to the Lieutenant's command
void SoldierRearranger::rearrangeSoldiers(std::vector<std::string>& soldiers) {
    int numSoldiers = soldiers.size();

    // Iterate through every second soldier
    for (int i = 0; i < numSoldiers - 1; i += 2) {
        // Swap current soldier with the next soldier
        swapSoldiers(soldiers[i], soldiers[i + 1]);
    }
}

// Helper function to swap soldiers
void SoldierRearranger::swapSoldiers(std::string& soldier1, std::string& soldier2) {
    std::swap(soldier1, soldier2);
}
