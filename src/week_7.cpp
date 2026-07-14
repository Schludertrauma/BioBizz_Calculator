#include <iostream>

#include "week_7.h"

void W7::week::seven(double water_input)
{
    // week7
    double bio_grow_week7 = 1 * water_input;
    double bio_grow_75_week7 = bio_grow_week7 / 1.333;
    double bio_grow_50_week7 = bio_grow_week7 / 2;

    double bio_bloom_week7 = 3 * water_input;
    double bio_bloom_75_week7 = bio_bloom_week7 / 1.333;
    double bio_bloom_50_week7 = bio_bloom_week7 / 2;

    double top_max_week7 = 1 * water_input;
    double top_max_75_week7 = top_max_week7 / 1.333;
    double top_max_50_week7 = top_max_week7 / 2;

    double bio_heaven_week7 = 4 * water_input;
    double bio_heaven_75_week7 = bio_heaven_week7 / 1.333;
    double bio_heaven_50_week7 = bio_bloom_week7 / 2;

    double acti_vera_week7 = 4 * water_input;
    double acti_vera_75_week7 = acti_vera_week7 / 1.333;
    double acti_vera_50_week7 = acti_vera_week7 / 2;

    // calmag week 6-8
    double cal_mag_week6_8 = 0.5 * water_input;

    std::cout << "You need for Week 7 and " << water_input << " Liter Water: \n"
              << "\n";
    std::cout << "CalMag: " << cal_mag_week6_8 << "ml\n"
              << "\n";
    std::cout << "100%\n";
    std::cout << "Bio Grow: " << bio_grow_week7 << "ml\n";
    std::cout << "Bio Bloom: " << bio_bloom_week7 << "ml\n";
    std::cout << "Top Max: " << top_max_week7 << "ml\n";
    std::cout << "Bio Heaven: " << bio_heaven_week7 << "ml\n";
    std::cout << "Acti Vera: " << acti_vera_week7 << "ml\n"
              << "\n";
    std::cout << "75%\n";
    std::cout << "Bio Grow: " << bio_grow_75_week7 << "ml\n";
    std::cout << "Bio Bloom: " << bio_bloom_75_week7 << "ml\n";
    std::cout << "Top Max: " << top_max_75_week7 << "ml\n";
    std::cout << "Bio Heaven: " << bio_heaven_75_week7 << "ml\n";
    std::cout << "Acti Vera: " << acti_vera_75_week7 << "ml\n"
              << "\n";
    std::cout << "50%\n";
    std::cout << "Bio Grow: " << bio_grow_50_week7 << "ml\n";
    std::cout << "Bio Bloom: " << bio_bloom_50_week7 << "ml\n";
    std::cout << "Top Max: " << top_max_50_week7 << "ml\n";
    std::cout << "Bio Heaven: " << bio_heaven_50_week7 << "ml\n";
    std::cout << "Acti Vera: " << acti_vera_50_week7 << "ml\n";
}