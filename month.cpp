// Copyright [2022] <Mr. Kent>"  [legal/copyright]
//
// Date : 10 - 13 - 22
// This program checks the month using numbers 1-12.

#include <iostream>

// main() covers 0-12 and goes according to the month.
int main() {
    int userMonth;
    std::cout << "What is the number of the month?: ";
    std::cin >> userMonth;
    // this switch will match number 1-12 with their corresponding month.
    switch (userMonth) {
    case 1:
        std::cout << "The month is January";
        break;
    case 2:
        std::cout << "The month is February";
        break;
    case 3:
        std::cout << "The month is March";
        break;
    case 4:
        std::cout << "The month is April";
        break;
    case 5:
        std::cout << "The month is May";
        break;
    case 6:
        std::cout << "The month is June";
        break;
    case 7:
        std::cout << "The month is July";
        break;
    case 8:
        std::cout << "The month is August";
        break;
    case 9:
        std::cout << "The month is September";
        break;
    case 10:
        std::cout << "The month is October";
        break;
    case 11:
        std::cout << "The month is November";
        break;
    case 12:
        std::cout << "The month is December";
        break;

    default:
        // Any other number or input will trigger this.
        std::cout << "Invalid input.";
        break;
    }
}
