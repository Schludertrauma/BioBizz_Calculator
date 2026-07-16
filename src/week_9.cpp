#include <iostream>

#include "week_9.h"

void W9::week9::nine(double water_input)
{
    // week9
    double bio_grow_week9 = 1 * water_input;
    double bio_grow_75_week9 = bio_grow_week9 / 1.333;
    double bio_grow_50_week9 = bio_grow_week9 / 2;

    double bio_bloom_week9 = 4 * water_input;
    double bio_bloom_75_week9 = bio_bloom_week9 / 1.333;
    double bio_bloom_50_week9 = bio_bloom_week9 / 2;

    double top_max_week9 = 4 * water_input;
    double top_max_75_week9 = top_max_week9 / 1.333;
    double top_max_50_week9 = top_max_week9 / 2;

    double bio_heaven_week9 = 5 * water_input;
    double bio_heaven_75_week9 = bio_heaven_week9 / 1.333;
    double bio_heaven_50_week9 = bio_bloom_week9 / 2;

    double acti_vera_week9 = 5 * water_input;
    double acti_vera_75_week9 = acti_vera_week9 / 1.333;
    double acti_vera_50_week9 = acti_vera_week9 / 2;

    // calmag week 9-12
    double cal_mag_week9_12 = 0.8 * water_input;

    std::cout << "You need for Week 9 and " << water_input << " Liter Water: \n"
              << "\n";
    std::cout << "CalMag: " << cal_mag_week9_12 << "ml\n";
    std::cout << "|100%|\n";
    std::cout << "Bio Grow: " << bio_grow_week9 << "ml\n";
    std::cout << "Bio Bloom: " << bio_bloom_week9 << "ml\n";
    std::cout << "Top Max: " << top_max_week9 << "ml\n";
    std::cout << "Bio Heaven: " << bio_heaven_week9 << "ml\n";
    std::cout << "Acti Vera: " << acti_vera_week9 << "ml\n";
    std::cout << "|75%|\n";
    std::cout << "Bio Grow: " << bio_grow_75_week9 << "ml\n";
    std::cout << "Bio Bloom: " << bio_bloom_75_week9 << "ml\n";
    std::cout << "Top Max: " << top_max_75_week9 << "ml\n";
    std::cout << "Bio Heaven: " << bio_heaven_75_week9 << "ml\n";
    std::cout << "Acti Vera: " << acti_vera_75_week9 << "ml\n";
    std::cout << "|50%|\n";
    std::cout << "Bio Grow: " << bio_grow_50_week9 << "ml\n";
    std::cout << "Bio Bloom: " << bio_bloom_50_week9 << "ml\n";
    std::cout << "Top Max: " << top_max_50_week9 << "ml\n";
    std::cout << "Bio Heaven: " << bio_heaven_50_week9 << "ml\n";
    std::cout << "Acti Vera: " << acti_vera_50_week9 << "ml\n";
}