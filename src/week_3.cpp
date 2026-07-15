#include <iostream>

#include "week_3.h"

void W3::week3::three(double water_input)
{
    // week3
    double bio_grow_week3 = 1 * water_input;
    double bio_grow_75_week3 = bio_grow_week3 / 1.333;
    double bio_grow_50_week3 = bio_grow_week3 / 2;

    double bio_bloom_week3 = 1 * water_input;
    double bio_bloom_75_week3 = bio_bloom_week3 / 1.333;
    double bio_bloom_50_week3 = bio_bloom_week3 / 2;

    double top_max_week3 = 1 * water_input;
    double top_max_75_week3 = top_max_week3 / 1.333;
    double top_max_50_week3 = top_max_week3 / 2;

    double bio_heaven_week3 = 2 * water_input;
    double bio_heaven_75_week3 = bio_heaven_week3 / 1.333;
    double bio_heaven_50_week3 = bio_heaven_week3 / 2;

    double acti_vera_week3 = 2 * water_input;
    double acti_vera_50_week3 = acti_vera_week3 / 1.333;
    double acti_vera_75_week3 = acti_vera_week3 / 2;

    // calmag week 1-5
    double cal_mag_week1_5 = 0.3 * water_input;

    std::cout << "You need for " << water_input << " Liter Water in Week 3: \n"
              << "\n";
    std::cout << "CalMag: " << cal_mag_week1_5 << "ml\n"
              << "\n";
    std::cout << "100%\n";
    std::cout << "Bio Grow: " << bio_grow_week3 << "ml\n";
    std::cout << "Bio Bloom: " << bio_bloom_week3 << "ml\n";
    std::cout << "Top Max: " << top_max_week3 << "ml\n";
    std::cout << "Bio Heaven: " << bio_heaven_week3 << "ml\n";
    std::cout << "Acti Vera: " << acti_vera_week3 << "ml\n"
              << "\n";
    std::cout << "75%\n";
    std::cout << "Bio Grow: " << bio_grow_75_week3 << "ml\n";
    std::cout << "Bio Bloom: " << bio_bloom_75_week3 << "ml\n";
    std::cout << "Top Max: " << top_max_75_week3 << "ml\n";
    std::cout << "Bio Heaven: " << bio_heaven_75_week3 << "ml\n";
    std::cout << "Acti Vera: " << acti_vera_75_week3 << "ml\n"
              << "\n";
    std::cout << "50%\n";
    std::cout << "Bio Grow: " << bio_grow_50_week3 << "ml\n";
    std::cout << "Bio Bloom: " << bio_bloom_50_week3 << "ml\n";
    std::cout << "Top Max: " << top_max_50_week3 << "ml\n";
    std::cout << "Bio Heaven: " << bio_heaven_50_week3 << "ml\n";
    std::cout << "Acti Vera: " << acti_vera_50_week3 << "ml\n";
}