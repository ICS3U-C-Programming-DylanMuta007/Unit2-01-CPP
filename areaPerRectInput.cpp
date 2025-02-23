// Copyright (c) 2025 Dylan Mutabazi All rights reserved
//
// Created by Dylan Mutabazi
// Created Feb 2025
// This program calculates the area and perimeter of a rectangle

#include <iostream>

int main() {
    float width;
    float length;

    std::cout << "what is the length of your rectangle?:";
    std::cin >> length;
    std::cout << "" << std::endl;

    std::cout << "what is the width of your rectangle?:";
    std::cin >> width;
    std::cout << "" << std::endl;

    std::cout << "The area of your rectangle = " << (width * length) << std::endl;
    std::cout << "The perimeter of your rectangle = " << (2 * (width + length)) << std::endl;
    std::cout << "" << std::endl;
}
