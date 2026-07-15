#include <iostream>

#include "inc/week_1.h"
#include "inc/week_2.h"
#include "inc/week_3.h"
#include "inc/week_4.h"
#include "inc/week_5.h"
#include "inc/week_6.h"
#include "inc/week_7.h"
#include "inc/week_8.h"
#include "inc/week_9.h"
#include "inc/week_10.h"
#include "inc/week_11.h"
#include "inc/week_12.h"

int main()
{
    // user_input
    int week_input;
    double water_input;
    bool run = true;

    // get user_input for water and week
    std::cout << "\n";
    std::cout << "Hello, from BioBizz_Calculator!\n"
              << "\n";
    std::cout << "Info: This Calculator follow the nutrient schedule from BioBizz(2024) for All Mix Soil.\n";
    std::cout << "      Start using fertilizers when your plant is 10-15cm or has 2-4 leaves.\n";
    std::cout << "      A pH-value between 6.2 and 6.5 is ideal, controlled pH-value between 6.2 and 6.3.\n";
    std::cout << "      Water 2-3 times a Week, no need to water till run-off.\n";
    std::cout << "      You can mix several fertilizers in same feeding water.\n";
    std::cout << "      Use CalMag every watering when you growing with Reverse osmosis or very soft Water, \n";
    std::cout << "      or once a Week in case of CalMag deficiency signs.\n";
    std::cout << "      It is always better to be modest than to add more.\n";
    std::cout << "      A plant will not die from too little nutrients, but it wont survive an overdose!\n";
    
    while (run == true)
    {
        std::cout << "\n" << "How much Water in Liter?\n";
        std::cout << "Water in Liter: ";
        std::cin >> water_input;
        if (water_input <= 0)
        {
            std::cerr << "\n";
            std::cerr << "Please enter a number over 0!\n";
            return 1;
        }
        std::cout << "\n";
        std::cout << "In which Week is your plant?\n";
        std::cout << "Week: ";
        std::cin >> week_input;
        if (week_input <= 0 || week_input >= 13)
        {
            std::cerr << "\n";
            std::cerr << "Please enter a number between 1 and 12!\n";
            return 1;
        } 
        std::cout << "\n";

        // use user_input for water and week to switch for right case
        switch (week_input)
        {
        case 1:
            W1::week1 w1;
            w1.one(water_input);
            break;

        case 2:
            W2::week2 w2;
            w2.two(water_input);
            break;

        case 3:
            W3::week3 w3;
            w3.three(water_input);
            break;

        case 4:
            W4::week4 w4;
            w4.four(water_input);
            break;

        case 5:
            W5::week5 w5;
            w5.five(water_input);
            break;

        case 6:
            W6::week6 w6;
            w6.six(water_input);
            break;

        case 7:
            W7::week7 w7;
            w7.seven(water_input);
            break;

        case 8:
            W8::week8 w8;
            w8.eight(water_input);
            break;

        case 9:
            W9::week9 w9;
            w9.nine(water_input);
            break;

        case 10:
            W10::week10 w10;
            w10.ten(water_input);
            break;

        case 11:
            W11::week11 w11;
            w11.eleven(water_input);
            break;

        case 12:
            W12::week12 w12;
            w12.twelve(water_input);
            break;

        default:
            std::cerr << "Please enter 1-12 for a Month!\n";
            break;
        }
    }
}