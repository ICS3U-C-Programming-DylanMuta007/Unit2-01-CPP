// Copyright (c) 2025 Dylan Mutabazi All rights reserved
//
// Created by Dylan Mutabazi
// Created Feb 2025
// This program calculates the area and perimeter of a rectangle

#include <iostream>

int main() {
    // Creat width and length variable 
    float width;
    float length;

    // asks for user input to asign a value for variable length and width
    std::cout << "what is the length of your rectangle?:";
    std::cin >> length;
    std::cout << "" << std::endl;

    std::cout << "what is the width of your rectangle?:";
    std::cin >> width;
    std::cout << "" << std::endl;

    // calculates the area and perimeter of the rectangle 
    std::cout << "area = " << (width * length) << std::endl;
    std::cout << "perimeter = " << (2 * (width + length)) << std::endl;
    std::cout << "" << std::endl;
}
