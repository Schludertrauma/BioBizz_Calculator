#include <iostream>

#include "week_8.h"

void W8::week8::eight(double water_input)
{
    // week8
    double bio_grow_week8 = 1 * water_input;
    double bio_grow_75_week8 = bio_grow_week8 / 1.333;
    double bio_grow_50_week8 = bio_grow_week8 / 2;

    double bio_bloom_week8 = 4 * water_input;
    double bio_bloom_75_week8 = bio_bloom_week8 / 1.333;
    double bio_bloom_50_week8 = bio_bloom_week8 / 2;

    double top_max_week8 = 4 * water_input;
    double top_max_75_week8 = top_max_week8 / 1.333;
    double top_max_50_week8 = top_max_week8 / 2;

    double bio_heaven_week8 = 5 * water_input;
    double bio_heaven_75_week8 = bio_heaven_week8 / 1.333;
    double bio_heaven_50_week8 = bio_bloom_week8 / 2;

    double acti_vera_week8 = 5 * water_input;
    double acti_vera_75_week8 = acti_vera_week8 / 1.333;
    double acti_vera_50_week8 = acti_vera_week8 / 2;

    // calmag week 6-8
    double cal_mag_week6_8 = 0.5 * water_input;

    std::cout << "You need for Week 8 and " << water_input << " Liter Water: \n"
              << "\n";
    std::cout << "CalMag: " << cal_mag_week6_8 << "ml\n"
              << "\n";
    std::cout << "100%\n";
    std::cout << "Bio Grow: " << bio_grow_week8 << "ml\n";
    std::cout << "Bio Bloom: " << bio_bloom_week8 << "ml\n";
    std::cout << "Top Max: " << top_max_week8 << "ml\n";
    std::cout << "Bio Heaven: " << bio_heaven_week8 << "ml\n";
    std::cout << "Acti Vera: " << acti_vera_week8 << "ml\n"
              << "\n";
    std::cout << "75%\n";
    std::cout << "Bio Grow: " << bio_grow_75_week8 << "ml\n";
    std::cout << "Bio Bloom: " << bio_bloom_75_week8 << "ml\n";
    std::cout << "Top Max: " << top_max_75_week8 << "ml\n";
    std::cout << "Bio Heaven: " << bio_heaven_75_week8 << "ml\n";
    std::cout << "Acti Vera: " << acti_vera_75_week8 << "ml\n"
              << "\n";
    std::cout << "50%\n";
    std::cout << "Bio Grow: " << bio_grow_50_week8 << "ml\n";
    std::cout << "Bio Bloom: " << bio_bloom_50_week8 << "ml\n";
    std::cout << "Top Max: " << top_max_50_week8 << "ml\n";
    std::cout << "Bio Heaven: " << bio_heaven_50_week8 << "ml\n";
    std::cout << "Acti Vera: " << acti_vera_50_week8 << "ml\n";
}