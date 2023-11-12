#ifndef TASK_3_H
#define TASK_3_H

#include <iostream>
#include <vector>

class SoldierRearranger {
public:
    // Constructor
    SoldierRearranger();

    // Destructor
    ~SoldierRearranger();

    // Function to rearrange soldiers according to the Lieutenant's command
    void rearrangeSoldiers(std::vector<std::string>& soldiers);

private:
    // Helper function to swap soldiers
    void swapSoldiers(std::string& soldier1, std::string& soldier2);
};

#endif // TASK_3_H
