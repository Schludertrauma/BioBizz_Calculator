#include <iostream>

#include "week_2.h"

void W2::week2::two(double water_input)
{
    // week2
    double root_juice_week2 = 4 * water_input;
    double root_juice_75_week2 = root_juice_week2 / 1.333;
    double root_juice_50_week2 = root_juice_week2 / 2;

    double bio_grow_week2 = 1 * water_input;
    double bio_grow_75_week2 = bio_grow_week2 / 1.333;
    double bio_grow_50_week2 = bio_grow_week2 / 2;

    double bio_heaven_week2 = 2 * water_input;
    double bio_heaven_75_week2 = bio_heaven_week2 / 1.333;
    double bio_heaven_50_week2 = bio_heaven_week2 / 2;

    double acti_vera_week2 = 2 * water_input;
    double acti_vera_75_week2 = acti_vera_week2 / 1.333;
    double acti_vera_50_week2 = acti_vera_week2 / 2;

    // calmag week 1-5
    double cal_mag_week1_5 = 0.3 * water_input;

    std::cout << "You need for " << water_input << " Liter Water in Week 2: \n"
              << "\n";
    std::cout << "CalMag: " << cal_mag_week1_5 << "ml\n";
    std::cout << "|100%|\n";
    std::cout << "Root Juice: " << root_juice_week2 << "ml\n";
    std::cout << "Bio Grow: " << bio_grow_week2 << "ml\n";
    std::cout << "Bio Heaven: " << bio_heaven_week2 << "ml\n";
    std::cout << "Acti Vera: " << acti_vera_week2 << "ml\n";
    std::cout << "|75%|\n";
    std::cout << "Root Juice: " << root_juice_75_week2 << "ml\n";
    std::cout << "Bio Heaven: " << bio_heaven_75_week2 << "ml\n";
    std::cout << "Acti Vera: " << acti_vera_75_week2 << "ml\n";
    std::cout << "|50%|\n";
    std::cout << "Root Juice: " << root_juice_50_week2 << "ml\n";
    std::cout << "Bio Heaven: " << bio_heaven_50_week2 << "ml\n";
    std::cout << "Acti Vera: " << acti_vera_50_week2 << "ml\n";
}