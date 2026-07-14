#include <iostream>

#include "week_4.h"

void W4::week::four(double water_input)
{
    // week4
    double bio_grow_week4 = 1 * water_input;
    double bio_grow_75_week4 = bio_grow_week4 / 1.333;
    double bio_grow_50_week4 = bio_grow_week4 / 2;

    double bio_bloom_week4 = 2 * water_input;
    double bio_bloom_75_week4 = bio_bloom_week4 / 1.333;
    double bio_bloom_50_week4 = bio_bloom_week4 / 2;

    double top_max_week4 = 1 * water_input;
    double top_max_75_week4 = top_max_week4 / 1.333;
    double top_max_50_week4 = top_max_week4 / 2;

    double bio_heaven_week4 = 2 * water_input;
    double bio_heaven_75_week4 = bio_heaven_week4 / 1.333;
    double bio_heaven_50_week4 = bio_heaven_week4 / 2;

    double acti_vera_week4 = 2 * water_input;
    double acti_vera_50_week4 = acti_vera_week4 / 1.333;
    double acti_vera_75_week4 = acti_vera_week4 / 2;

    // calmag week 1-5
    double cal_mag_week1_5 = 0.3 * water_input;

    std::cout << "You need for " << water_input << " Liter Water in Week 4: \n"
              << "\n";
    std::cout << "CalMag: " << cal_mag_week1_5 << "ml\n"
              << "\n";
    std::cout << "100%\n";
    std::cout << "Bio Grow: " << bio_grow_week4 << "ml\n";
    std::cout << "Bio Bloom: " << bio_bloom_week4 << "ml\n";
    std::cout << "Top Max: " << top_max_week4 << "ml\n";
    std::cout << "Bio Heaven: " << bio_heaven_week4 << "ml\n";
    std::cout << "Acti Vera: " << acti_vera_week4 << "ml\n"
              << "\n";
    std::cout << "75%\n";
    std::cout << "Bio Grow: " << bio_grow_75_week4 << "ml\n";
    std::cout << "Bio Bloom: " << bio_bloom_75_week4 << "ml\n";
    std::cout << "Top Max: " << top_max_75_week4 << "ml\n";
    std::cout << "Bio Heaven: " << bio_heaven_75_week4 << "ml\n";
    std::cout << "Acti Vera: " << acti_vera_75_week4 << "ml\n"
              << "\n";
    std::cout << "50%\n";
    std::cout << "Bio Grow: " << bio_grow_50_week4 << "ml\n";
    std::cout << "Bio Bloom: " << bio_bloom_50_week4 << "ml\n";
    std::cout << "Top Max: " << top_max_50_week4 << "ml\n";
    std::cout << "Bio Heaven: " << bio_heaven_50_week4 << "ml\n";
    std::cout << "Acti Vera: " << acti_vera_50_week4 << "ml\n";
}