#include <iostream>

#include "week_1.h"
#include "week_2.h"
#include "week_3.h"
#include "week_4.h"
#include "week_5.h"
#include "week_6.h"
#include "week_7.h"
#include "week_8.h"
#include "week_9.h"
#include "week_10.h"
#include "week_11.h"
#include "week_12.h"

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

    //use user_input for water and week to switch for right case
    switch (week_input)
    {
    case 1:
        W1::week w1;
        w1.one(water_input);
        break;

    case 2:
        W2::week w2;
        w2.two(water_input);
        break;

    case 3:
        W3::week w3;
        w3.three(water_input);
        break;

    case 4:
        W4::week w4;
        w4.four(water_input);
        break;

    case 5:
        W5::week w5;
        w5.five(water_input);  
        break;

    case 6:
        W6::week w6;
        w6.six(water_input); 
        break;

    case 7:
        W7::week w7;
        w7.seven(water_input); 
        break;

    case 8:
        W8::week w8;
        w8.eight(water_input); 
        break;

    case 9:
        W9::week w9;
        w9.nine(water_input);  
        break;

    case 10:
        W10::week w10;
        w10.ten(water_input); 
        break;

    case 11:
        W11::week w11;
        w11.eleven(water_input);
        break;

    case 12:
        W12::week w12;
        w12.twelve(water_input);
        break;

    default:
        std::cerr << "Please enter 1-12 for a Month!\n";
        break;
    }     
}