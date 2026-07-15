#include <iostream>

#include "week_5.h"

void W5::week5::five(double water_input)
{
    // week5
    double bio_grow_week5 = 1 * water_input;
    double bio_grow_75_week5 = bio_grow_week5 / 1.333;
    double bio_grow_50_week5 = bio_grow_week5 / 2;

    double bio_bloom_week5 = 2 * water_input;
    double bio_bloom_75_week5 = bio_bloom_week5 / 1.333;
    double bio_bloom_50_week5 = bio_bloom_week5 / 2;

    double top_max_week5 = 1 * water_input;
    double top_max_75_week5 = top_max_week5 / 1.333;
    double top_max_50_week5 = top_max_week5 / 2;

    double bio_heaven_week5 = 3 * water_input;
    double bio_heaven_75_week5 = bio_heaven_week5 / 1.333;
    double bio_heaven_50_week5 = bio_heaven_week5 / 2;

    double acti_vera_week5 = 3 * water_input;
    double acti_vera_75_week5 = acti_vera_week5 / 1.333;
    double acti_vera_50_week5 = acti_vera_week5 / 2;

    // calmag week 1-5
    double cal_mag_week1_5 = 0.3 * water_input;

    std::cout << "You need for " << water_input << " Liter Water in Week 5: \n"
              << "\n";
    std::cout << "CalMag: " << cal_mag_week1_5 << "ml\n"
              << "\n";
    std::cout << "100%\n";
    std::cout << "Bio Grow: " << bio_grow_week5 << "ml\n";
    std::cout << "Bio Bloom: " << bio_bloom_week5 << "ml\n";
    std::cout << "Top Max: " << top_max_week5 << "ml\n";
    std::cout << "Bio Heaven: " << bio_heaven_week5 << "ml\n";
    std::cout << "Acti Vera: " << acti_vera_week5 << "ml\n"
              << "\n";
    std::cout << "75%\n";
    std::cout << "Bio Grow: " << bio_grow_75_week5 << "ml\n";
    std::cout << "Bio Bloom: " << bio_bloom_75_week5 << "ml\n";
    std::cout << "Top Max: " << top_max_75_week5 << "ml\n";
    std::cout << "Bio Heaven: " << bio_heaven_75_week5 << "ml\n";
    std::cout << "Acti Vera: " << acti_vera_75_week5 << "ml\n"
              << "\n";
    std::cout << "50%\n";
    std::cout << "Bio Grow: " << bio_grow_50_week5 << "ml\n";
    std::cout << "Bio Bloom: " << bio_bloom_50_week5 << "ml\n";
    std::cout << "Top Max: " << top_max_50_week5 << "ml\n";
    std::cout << "Bio Heaven: " << bio_heaven_50_week5 << "ml\n";
    std::cout << "Acti Vera: " << acti_vera_50_week5 << "ml\n";
}