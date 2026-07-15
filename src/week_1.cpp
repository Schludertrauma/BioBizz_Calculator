#include <iostream>

#include "week_1.h"

void W1::week1::one(double water_input)
{
    // week1
    double root_juice_week1 = 4 * water_input;
    double root_juice_75_week1 = root_juice_week1 / 1.333;
    double root_juice_50_week1 = root_juice_week1 / 2;

    double bio_heaven_week1 = 2 * water_input;
    double bio_heaven_75_week1 = bio_heaven_week1 / 1.333;
    double bio_heaven_50_week1 = bio_heaven_week1 / 2;

    double acti_vera_week1 = 2 * water_input;
    double acti_vera_75_week1 = acti_vera_week1 / 1.333;
    double acti_vera_50_week1 = acti_vera_week1 / 2;

    // calmag week 1-5
    double cal_mag_week1_5 = 0.3 * water_input;

    std::cout << "You need for " << water_input << " Liter Water in Week 1: \n"
              << "\n";
    std::cout << "CalMag: " << cal_mag_week1_5 << "ml\n"
              << "\n";
    std::cout << "100%\n";
    std::cout << "Root Juice: " << root_juice_week1 << "ml\n";
    std::cout << "Bio Heaven: " << bio_heaven_week1 << "ml\n";
    std::cout << "Acti Vera: " << acti_vera_week1 << "ml\n"
              << "\n";
    std::cout << "75%\n";
    std::cout << "Root Juice: " << root_juice_75_week1 << "ml\n";
    std::cout << "Bio Heaven: " << bio_heaven_75_week1 << "ml\n";
    std::cout << "Acti Vera: " << acti_vera_75_week1 << "ml\n"
              << "\n";
    std::cout << "50%\n";
    std::cout << "Root Juice: " << root_juice_50_week1 << "ml\n";
    std::cout << "Bio Heaven: " << bio_heaven_50_week1 << "ml\n";
    std::cout << "Acti Vera: " << acti_vera_50_week1 << "ml\n";
}