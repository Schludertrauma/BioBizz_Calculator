#include <iostream>

int main()
{
    //user_input
    int week_input;
    double water_input;
    
    //get user_input for water and week
    std::cout << "\n";
    std::cout << "Hello, from BioBizz_Calculator!\n" << "\n";
    std::cout << "Info: This Calculator follow the nutrient schedule from BioBizz(2024) for All Mix Soil.\n";
    std::cout << "      Start using fertilizers when your plant is 10-15cm or has 2-4 leaves.\n";
    std::cout << "      A pH-value between 6.2 and 6.5 is ideal, controlled pH-value between 6.2 and 6.3.\n";
    std::cout << "      Water 2-3 times a Week, no need to water till run-off.\n";
    std::cout << "      You can mix several fertilizers in same feeding water.\n";
    std::cout << "      Use CalMag every watering when you growing with Reverse osmosis or very soft Water, or once a Week in case of CalMag deficiency signs.\n";
    std::cout << "      It is always better to be modest than to add more. A plant will not die from too little nutrients, but it wont survive an overdose!\n";
    std::cout << "\n";
    std::cout << "How much Water in Liter?\n";
    std::cout << "Water in Liter: ";
    std::cin >> water_input;
    if (water_input <= 0)
    {
        std::cerr << "Please enter a number over 0!\n";
        return 0;
    } 
    std::cout << "\n";
    std::cout << "In which Week is your plant?\n";
    std::cout << "Week: ";
    std::cin >> week_input;
    std::cout << "\n";

    //week1
    double root_juice_week1 = 4*water_input;
    double root_juice_70_week1 = root_juice_week1/1.333;
    double root_juice_50_week1 = root_juice_week1/2;

    double bio_heaven_week1 = 2*water_input;
    double bio_heaven_70_week1 = bio_heaven_week1/1.333;
    double bio_heaven_50_week1 = bio_heaven_week1/2;

    double acti_vera_week1 = 2*water_input;
    double acti_vera_70_week1 = acti_vera_week1/1.333;
    double acti_vera_50_week1 = acti_vera_week1/2;

    //week2
    double root_juice_week2 = 4*water_input;
    double root_juice_70_week2 = root_juice_week2/1.333;
    double root_juice_50_week2 = root_juice_week2/2;

    double bio_grow_week2 = 1*water_input;
    double bio_grow_70_week2 = bio_grow_week2/1.333;
    double bio_grow_50_week2 = bio_grow_week2/2;

    double bio_heaven_week2 = 2*water_input;
    double bio_heaven_70_week2 = bio_heaven_week2/1.333;
    double bio_heaven_50_week2 = bio_heaven_week2/2;

    double acti_vera_week2 = 2*water_input;
    double acti_vera_70_week2 = acti_vera_week2/1.333;
    double acti_vera_50_week2 = acti_vera_week2/2;

    //week3
    double bio_grow_week3 = 1*water_input;
    double bio_grow_70_week3 = bio_grow_week3/1.333;
    double bio_grow_50_week3 = bio_grow_week3/2;

    double bio_bloom_week3 = 1*water_input;
    double bio_bloom_70_week3 = bio_bloom_week3/1.333;
    double bio_bloom_50_week3 = bio_bloom_week3/2;

    double top_max_week3 = 1*water_input;
    double top_max_70_week3 = top_max_week3/1.333;
    double top_max_50_week3 = top_max_week3/2;

    double bio_heaven_week3 = 2*water_input;
    double bio_heaven_70_week3 = bio_heaven_week3/1.333;
    double bio_heaven_50_week3 = bio_heaven_week3/2;

    double acti_vera_week3 = 2*water_input;
    double acti_vera_50_week3 = acti_vera_week3/1.333;
    double acti_vera_70_week3 = acti_vera_week3/2;

    //week4
    double bio_grow_week4 = 1*water_input;
    double bio_grow_70_week4 = bio_grow_week4/1.333;
    double bio_grow_50_week4 = bio_grow_week4/2;

    double bio_bloom_week4 = 2*water_input;
    double bio_bloom_70_week4 = bio_bloom_week4/1.333;
    double bio_bloom_50_week4 = bio_bloom_week4/2;

    double top_max_week4 = 1*water_input;
    double top_max_70_week4 = top_max_week4/1.333;
    double top_max_50_week4 = top_max_week4/2;

    double bio_heaven_week4 = 2*water_input;
    double bio_heaven_70_week4 = bio_heaven_week4/1.333;
    double bio_heaven_50_week4 = bio_heaven_week4/2;

    double acti_vera_week4 = 2*water_input;
    double acti_vera_50_week4 = acti_vera_week4/1.333;
    double acti_vera_70_week4 = acti_vera_week4/2;

    //week5
    double bio_grow_week5 = 1*water_input;
    double bio_grow_70_week5 = bio_grow_week5/1.333;
    double bio_grow_50_week5 = bio_grow_week5/2;

    double bio_bloom_week5 = 2*water_input;
    double bio_bloom_70_week5 = bio_bloom_week5/1.333;
    double bio_bloom_50_week5 = bio_bloom_week5/2;

    double top_max_week5 = 1*water_input;
    double top_max_70_week5 = top_max_week5/1.333;
    double top_max_50_week5 = top_max_week5/2;

    double bio_heaven_week5 = 3*water_input;
    double bio_heaven_70_week5 = bio_heaven_week5/1.333;
    double bio_heaven_50_week5 = bio_heaven_week5/2;

    double acti_vera_week5 = 3*water_input;
    double acti_vera_70_week5 = acti_vera_week5/1.333;
    double acti_vera_50_week5 = acti_vera_week5/2;

    //week6
    double bio_grow_week6 = 1*water_input;
    double bio_grow_70_week6 = bio_grow_week6/1.333;
    double bio_grow_50_week6 = bio_grow_week6/2;

    double bio_bloom_week6 = 3*water_input;
    double bio_bloom_70_week6 = bio_bloom_week6/1.333;
    double bio_bloom_50_week6 = bio_bloom_week6/2;

    double top_max_week6 = 1*water_input;
    double top_max_70_week6 = top_max_week6/1.333;
    double top_max_50_week6 = top_max_week6/2;

    double bio_heaven_week6 = 4*water_input;
    double bio_heaven_70_week6 = bio_heaven_week6/1.333;
    double bio_heaven_50_week6 = bio_heaven_week6/2;

    double acti_vera_week6 = 4*water_input;
    double acti_vera_70_week6 = acti_vera_week6/1.333;
    double acti_vera_50_week6 = acti_vera_week6/2;

    //week7
    double bio_grow_week7 = 1*water_input;
    double bio_grow_70_week7 = bio_grow_week7/1.333;
    double bio_grow_50_week7 = bio_grow_week7/2;

    double bio_bloom_week7 = 3*water_input;
    double bio_bloom_70_week7 = bio_bloom_week7/1.333;
    double bio_bloom_50_week7 = bio_bloom_week7/2;

    double top_max_week7 = 1*water_input;
    double top_max_70_week7 = top_max_week7/1.333;
    double top_max_50_week7 = top_max_week7/2;

    double bio_heaven_week7 = 4*water_input;
    double bio_heaven_70_week7 = bio_heaven_week7/1.333;
    double bio_heaven_50_week7 = bio_bloom_week7/2;

    double acti_vera_week7 = 4*water_input;
    double acti_vera_70_week7 = acti_vera_week7/1.333;
    double acti_vera_50_week7 = acti_vera_week7/2;

    //week8
    double bio_grow_week8 = 1*water_input;
    double bio_grow_70_week8 = bio_grow_week8/1.333;
    double bio_grow_50_week8 = bio_grow_week8/2;

    double bio_bloom_week8 = 4*water_input;
    double bio_bloom_70_week8 = bio_bloom_week8/1.333;
    double bio_bloom_50_week8 = bio_bloom_week8/2;

    double top_max_week8 = 4*water_input;
    double top_max_70_week8 = top_max_week8/1.333;
    double top_max_50_week8 = top_max_week8/2;

    double bio_heaven_week8 = 5*water_input;
    double bio_heaven_70_week8 = bio_heaven_week8/1.333;
    double bio_heaven_50_week8 = bio_bloom_week8/2;

    double acti_vera_week8 = 5*water_input;
    double acti_vera_70_week8 = acti_vera_week8/1.333;
    double acti_vera_50_week8 = acti_vera_week8/2;

    //week9
    double bio_grow_week9 = 1*water_input;
    double bio_grow_70_week9 = bio_grow_week9/1.333;
    double bio_grow_50_week9 = bio_grow_week9/2;

    double bio_bloom_week9 = 4*water_input;
    double bio_bloom_70_week9 = bio_bloom_week9/1.333;
    double bio_bloom_50_week9 = bio_bloom_week9/2;

    double top_max_week9 = 4*water_input;
    double top_max_70_week9 = top_max_week9/1.333;
    double top_max_50_week9 = top_max_week9/2;

    double bio_heaven_week9 = 5*water_input;
    double bio_heaven_70_week9 = bio_heaven_week9/1.333;
    double bio_heaven_50_week9 = bio_bloom_week9/2;

    double acti_vera_week9 = 5*water_input;
    double acti_vera_70_week9 = acti_vera_week9/1.333;
    double acti_vera_50_week9 = acti_vera_week9/2;

    //week10
    double bio_grow_week10 = 1*water_input;
    double bio_grow_70_week10 = bio_grow_week10/1.333;
    double bio_grow_50_week10 = bio_grow_week10/2;

    double bio_bloom_week10 = 4*water_input;
    double bio_bloom_70_week10 = bio_bloom_week10/1.333;
    double bio_bloom_50_week10 = bio_bloom_week10/2;

    double top_max_week10 = 4*water_input;
    double top_max_70_week10 = top_max_week10/1.333;
    double top_max_50_week10 = top_max_week10/2;

    double bio_heaven_week10 = 5*water_input;
    double bio_heaven_70_week10 = bio_heaven_week10/1.333;
    double bio_heaven_50_week10 = bio_bloom_week10/2;

    double acti_vera_week10 = 5*water_input;
    double acti_vera_70_week10 = acti_vera_week10/1.333;
    double acti_vera_50_week10 = acti_vera_week10/2;

    //calmag week 1-5
    double cal_mag_week1_5 = 0.3*water_input;

    //calmag week 6-8
    double cal_mag_week6_8 = 0.5*water_input;

    //calmag week 9-10
    double cal_mag_week9_12 = 0.8*water_input;

    //use user_input for water and week to switch for right case
    switch (week_input)
    {
    case 1:
        std::cout << "You need for Week 1 and " << water_input << " Liter Water: \n" << "\n";
        std::cout << "CalMag: " << cal_mag_week1_5 << "ml\n"; 
        std::cout << "100%\n"; 
        std::cout << "Root Juice: " << root_juice_week1 << "ml\n";
        std::cout << "Bio Heaven: " << bio_heaven_week1 << "ml\n";
        std::cout << "Acti Vera: " << acti_vera_week1 << "ml\n";
        std::cout << "75%\n";
        std::cout << "Root Juice: " << root_juice_70_week1 << "ml\n";
        std::cout << "Bio Heaven: " << bio_heaven_70_week1 << "ml\n";
        std::cout << "Acti Vera: " << acti_vera_70_week1 << "ml\n";
        std::cout << "50%\n";
        std::cout << "Root Juice: " << root_juice_50_week1 << "ml\n";
        std::cout << "Bio Heaven: " << bio_heaven_50_week1 << "ml\n";
        std::cout << "Acti Vera: " << acti_vera_50_week1 << "ml\n";
        break;

    case 2:
        std::cout << "You need for Week 2 and " << water_input << " Liter Water: \n" << "\n";
        std::cout << "CalMag: " << cal_mag_week1_5 << "ml\n";
        std::cout << "100%\n"; 
        std::cout << "Root Juice: " << root_juice_week1 << "ml\n"; 
        std::cout << "Bio Grow: " << bio_grow_week2 << "ml\n";
        std::cout << "Bio Heaven: " << bio_heaven_week2 << "ml\n";
        std::cout << "Acti Vera: " << acti_vera_week2 << "ml\n";
        std::cout << "75%\n";
        std::cout << "Root Juice: " << root_juice_70_week2 << "ml\n";
        std::cout << "Bio Heaven: " << bio_heaven_70_week2 << "ml\n";
        std::cout << "Acti Vera: " << acti_vera_70_week2 << "ml\n" << "\n";
        std::cout << "50%\n";
        std::cout << "Root Juice: " << root_juice_50_week2 << "ml\n";
        std::cout << "Bio Heaven: " << bio_heaven_50_week2 << "ml\n";
        std::cout << "Acti Vera: " << acti_vera_50_week2 << "ml\n" << "\n";
        break;

    case 3:
        std::cout << "You need for Week 3 and " << water_input << " Liter Water: \n" << "\n"; 
        std::cout << "CalMag: " << cal_mag_week1_5 << "ml\n";
        std::cout << "100%\n"; 
        std::cout << "Bio Grow: " << bio_grow_week3 << "ml\n";
        std::cout << "Bio Bloom: " << bio_bloom_week3 << "ml\n";
        std::cout << "Top Max: " << top_max_week3 << "ml\n";
        std::cout << "Bio Heaven: " << bio_heaven_week3 << "ml\n";
        std::cout << "Acti Vera: " << acti_vera_week3 << "ml\n";
        std::cout << "75%\n";
        std::cout << "Bio Grow: " << bio_grow_70_week3 << "ml\n";
        std::cout << "Bio Bloom: " << bio_bloom_70_week3 << "ml\n";
        std::cout << "Top Max: " << top_max_70_week3 << "ml\n";
        std::cout << "Bio Heaven: " << bio_heaven_70_week3 << "ml\n";
        std::cout << "Acti Vera: " << acti_vera_70_week3 << "ml\n";
        std::cout << "50%\n";
        std::cout << "Bio Grow: " << bio_grow_50_week3 << "ml\n";
        std::cout << "Bio Bloom: " << bio_bloom_50_week3 << "ml\n";
        std::cout << "Top Max: " << top_max_50_week3 << "ml\n";
        std::cout << "Bio Heaven: " << bio_heaven_50_week3 << "ml\n";
        std::cout << "Acti Vera: " << acti_vera_50_week3 << "ml\n" << "\n";
        break;

    case 4:
        std::cout << "You need for Week 4 and " << water_input << " Liter Water: \n" << "\n";
        std::cout << "CalMag: " << cal_mag_week1_5 << "ml\n";
        std::cout << "100%\n"; 
        std::cout << "Bio Grow: " << bio_grow_week4 << "ml\n";
        std::cout << "Bio Bloom: " << bio_bloom_week4 << "ml\n";
        std::cout << "Top Max: " << top_max_week4 << "ml\n";
        std::cout << "Bio Heaven: " << bio_heaven_week4 << "ml\n";
        std::cout << "Acti Vera: " << acti_vera_week4 << "ml\n";
        std::cout << "75%\n";
        std::cout << "Bio Grow: " << bio_grow_70_week4 << "ml\n";
        std::cout << "Bio Bloom: " << bio_bloom_70_week4 << "ml\n";
        std::cout << "Top Max: " << top_max_70_week4 << "ml\n";
        std::cout << "Bio Heaven: " << bio_heaven_70_week4 << "ml\n";
        std::cout << "Acti Vera: " << acti_vera_70_week4 << "ml\n";
        std::cout << "50%\n";
        std::cout << "Bio Grow: " << bio_grow_50_week4 << "ml\n";
        std::cout << "Bio Bloom: " << bio_bloom_50_week4 << "ml\n";
        std::cout << "Top Max: " << top_max_50_week4 << "ml\n";
        std::cout << "Bio Heaven: " << bio_heaven_50_week4 << "ml\n";
        std::cout << "Acti Vera: " << acti_vera_50_week4 << "ml\n" << "\n"; 
        break;

    case 5:
        std::cout << "You need for Week 5 and " << water_input << " Liter Water: \n" << "\n";
        std::cout << "CalMag: " << cal_mag_week1_5 << "ml\n";
        std::cout << "100%\n"; 
        std::cout << "Bio Grow: " << bio_grow_week5 << "ml\n";
        std::cout << "Bio Bloom: " << bio_bloom_week5 << "ml\n";
        std::cout << "Top Max: " << top_max_week5 << "ml\n";
        std::cout << "Bio Heaven: " << bio_heaven_week5 << "ml\n";
        std::cout << "Acti Vera: " << acti_vera_week5 << "ml\n";
        std::cout << "75%\n";
        std::cout << "Bio Grow: " << bio_grow_70_week5 << "ml\n";
        std::cout << "Bio Bloom: " << bio_bloom_70_week5 << "ml\n";
        std::cout << "Top Max: " << top_max_70_week5 << "ml\n";
        std::cout << "Bio Heaven: " << bio_heaven_70_week5 << "ml\n";
        std::cout << "Acti Vera: " << acti_vera_70_week5 << "ml\n";
        std::cout << "50%\n";
        std::cout << "Bio Grow: " << bio_grow_50_week5 << "ml\n";
        std::cout << "Bio Bloom: " << bio_bloom_50_week5 << "ml\n";
        std::cout << "Top Max: " << top_max_50_week5 << "ml\n";
        std::cout << "Bio Heaven: " << bio_heaven_50_week5 << "ml\n";
        std::cout << "Acti Vera: " << acti_vera_50_week5 << "ml\n" << "\n";  
        break;

    case 6:
        std::cout << "You need for Week 6 and " << water_input << " Liter Water: \n" << "\n";
        std::cout << "CalMag: " << cal_mag_week6_8 << "ml\n";
        std::cout << "100%\n"; 
        std::cout << "Bio Grow: " << bio_grow_week6 << "ml\n";
        std::cout << "Bio Bloom: " << bio_bloom_week6 << "ml\n";
        std::cout << "Top Max: " << top_max_week6 << "ml\n";
        std::cout << "Bio Heaven: " << bio_heaven_week6 << "ml\n";
        std::cout << "Acti Vera: " << acti_vera_week6 << "ml\n";
        std::cout << "75%\n";
        std::cout << "Bio Grow: " << bio_grow_70_week6 << "ml\n";
        std::cout << "Bio Bloom: " << bio_bloom_70_week6 << "ml\n";
        std::cout << "Top Max: " << top_max_70_week6 << "ml\n";
        std::cout << "Bio Heaven: " << bio_heaven_70_week6 << "ml\n";
        std::cout << "Acti Vera: " << acti_vera_70_week6 << "ml\n";
        std::cout << "50%\n";
        std::cout << "Bio Grow: " << bio_grow_50_week6 << "ml\n";
        std::cout << "Bio Bloom: " << bio_bloom_50_week6 << "ml\n";
        std::cout << "Top Max: " << top_max_50_week6 << "ml\n";
        std::cout << "Bio Heaven: " << bio_heaven_50_week6 << "ml\n";
        std::cout << "Acti Vera: " << acti_vera_50_week6 << "ml\n" << "\n";  
        break;

    case 7:
        std::cout << "You need for Week 7 and " << water_input << " Liter Water: \n" << "\n";
        std::cout << "CalMag: " << cal_mag_week6_8 << "ml\n";
        std::cout << "100%\n"; 
        std::cout << "Bio Grow: " << bio_grow_week7 << "ml\n";
        std::cout << "Bio Bloom: " << bio_bloom_week7 << "ml\n";
        std::cout << "Top Max: " << top_max_week7 << "ml\n";
        std::cout << "Bio Heaven: " << bio_heaven_week7 << "ml\n";
        std::cout << "Acti Vera: " << acti_vera_week7 << "ml\n";
        std::cout << "75%\n";
        std::cout << "Bio Grow: " << bio_grow_70_week7 << "ml\n";
        std::cout << "Bio Bloom: " << bio_bloom_70_week7 << "ml\n";
        std::cout << "Top Max: " << top_max_70_week7 << "ml\n";
        std::cout << "Bio Heaven: " << bio_heaven_70_week7 << "ml\n";
        std::cout << "Acti Vera: " << acti_vera_70_week7 << "ml\n";
        std::cout << "50%\n";
        std::cout << "Bio Grow: " << bio_grow_50_week7 << "ml\n";
        std::cout << "Bio Bloom: " << bio_bloom_50_week7 << "ml\n";
        std::cout << "Top Max: " << top_max_50_week7 << "ml\n";
        std::cout << "Bio Heaven: " << bio_heaven_50_week7 << "ml\n";
        std::cout << "Acti Vera: " << acti_vera_50_week7 << "ml\n" << "\n";  
        break;

    case 8:
        std::cout << "You need for Week 8 and " << water_input << " Liter Water: \n" << "\n";
        std::cout << "CalMag: " << cal_mag_week6_8 << "ml\n";
        std::cout << "100%\n"; 
        std::cout << "Bio Grow: " << bio_grow_week8 << "ml\n";
        std::cout << "Bio Bloom: " << bio_bloom_week8 << "ml\n";
        std::cout << "Top Max: " << top_max_week8 << "ml\n";
        std::cout << "Bio Heaven: " << bio_heaven_week8 << "ml\n";
        std::cout << "Acti Vera: " << acti_vera_week8 << "ml\n";
        std::cout << "75%\n";
        std::cout << "Bio Grow: " << bio_grow_70_week8 << "ml\n";
        std::cout << "Bio Bloom: " << bio_bloom_70_week8 << "ml\n";
        std::cout << "Top Max: " << top_max_70_week8 << "ml\n";
        std::cout << "Bio Heaven: " << bio_heaven_70_week8 << "ml\n";
        std::cout << "Acti Vera: " << acti_vera_70_week8 << "ml\n";
        std::cout << "50%\n";
        std::cout << "Bio Grow: " << bio_grow_50_week8 << "ml\n";
        std::cout << "Bio Bloom: " << bio_bloom_50_week8 << "ml\n";
        std::cout << "Top Max: " << top_max_50_week8 << "ml\n";
        std::cout << "Bio Heaven: " << bio_heaven_50_week8 << "ml\n";
        std::cout << "Acti Vera: " << acti_vera_50_week8 << "ml\n" << "\n";  
        break;

    case 9:
        std::cout << "You need for Week 9 and " << water_input << " Liter Water: \n" << "\n";
        std::cout << "CalMag: " << cal_mag_week9_12 << "ml\n";
        std::cout << "100%\n"; 
        std::cout << "Bio Grow: " << bio_grow_week9 << "ml\n";
        std::cout << "Bio Bloom: " << bio_bloom_week9 << "ml\n";
        std::cout << "Top Max: " << top_max_week9 << "ml\n";
        std::cout << "Bio Heaven: " << bio_heaven_week9 << "ml\n";
        std::cout << "Acti Vera: " << acti_vera_week9 << "ml\n";
        std::cout << "75%\n";
        std::cout << "Bio Grow: " << bio_grow_70_week9 << "ml\n";
        std::cout << "Bio Bloom: " << bio_bloom_70_week9 << "ml\n";
        std::cout << "Top Max: " << top_max_70_week9 << "ml\n";
        std::cout << "Bio Heaven: " << bio_heaven_70_week9 << "ml\n";
        std::cout << "Acti Vera: " << acti_vera_70_week9 << "ml\n";
        std::cout << "50%\n";
        std::cout << "Bio Grow: " << bio_grow_50_week9 << "ml\n";
        std::cout << "Bio Bloom: " << bio_bloom_50_week9 << "ml\n";
        std::cout << "Top Max: " << top_max_50_week9 << "ml\n";
        std::cout << "Bio Heaven: " << bio_heaven_50_week9 << "ml\n";
        std::cout << "Acti Vera: " << acti_vera_50_week9 << "ml\n" << "\n";  
        break;

    case 10:
        std::cout << "You need for Week 10 and " << water_input << " Liter Water: \n" << "\n";
        std::cout << "CalMag: " << cal_mag_week9_12 << "ml\n";
        std::cout << "100%\n"; 
        std::cout << "Bio Grow: " << bio_grow_week10 << "ml\n";
        std::cout << "Bio Bloom: " << bio_bloom_week10 << "ml\n";
        std::cout << "Top Max: " << top_max_week10 << "ml\n";
        std::cout << "Bio Heaven: " << bio_heaven_week10 << "ml\n";
        std::cout << "Acti Vera: " << acti_vera_week10 << "ml\n";
        std::cout << "75%\n";
        std::cout << "Bio Grow: " << bio_grow_70_week10 << "ml\n";
        std::cout << "Bio Bloom: " << bio_bloom_70_week10 << "ml\n";
        std::cout << "Top Max: " << top_max_70_week10 << "ml\n";
        std::cout << "Bio Heaven: " << bio_heaven_70_week10 << "ml\n";
        std::cout << "Acti Vera: " << acti_vera_70_week10 << "ml\n";
        std::cout << "50%\n";
        std::cout << "Bio Grow: " << bio_grow_50_week10 << "ml\n";
        std::cout << "Bio Bloom: " << bio_bloom_50_week10 << "ml\n";
        std::cout << "Top Max: " << top_max_50_week10 << "ml\n";
        std::cout << "Bio Heaven: " << bio_heaven_50_week10 << "ml\n";
        std::cout << "Acti Vera: " << acti_vera_50_week10 << "ml\n" << "\n";  
        break;

    case 11:
        std::cout << "You should be flashing in Week 11!\n";
        std::cout << "Optional with: \n";
        std::cout << "CalMag: " << cal_mag_week9_12 << "ml\n";
        break;

    case 12:
        std::cout << "You should be harvesting in Week 12!\n";
        std::cout << "Optional flashing with: \n";
        std::cout << "CalMag: " << cal_mag_week9_12 << "ml\n";
        break;

    default:
        std::cerr << "Please enter 1-12 for a Month!\n";
        break;
    }     
}