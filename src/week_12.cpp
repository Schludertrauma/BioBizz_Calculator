#include <iostream>

#include "week_12.h"

void W12::week::twelve(double water_input)
{
    // calmag week 9-12
    double cal_mag_week9_12 = 0.8 * water_input;

    std::cout << "You should be harvesting in Week 12!\n";
    std::cout << "Optional flashing with: \n";
    std::cout << "CalMag: " << cal_mag_week9_12 << "ml\n"
              << "\n";
}