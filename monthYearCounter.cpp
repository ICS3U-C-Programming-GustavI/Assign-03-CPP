// Copyright (c) 2025 Gustav I
// Created by: Gustav I
// Created on: April 7, 2025
// This program asks the user to enter a month and a year,
// then tells them how many days are in that month.
// If the month is February, it checks for a leap year and adjusts the days.

#include <iostream>
#include <string>

int main() {
    std::string month;
    int year;

    // Warnings for user before input section
    std::cout << "This program tells you how many days are in a month."
              << std::endl;
    std::cout << "Note: Capitalize the first letter of the month "
              << "(e.g., February)." << std::endl;
    std::cout << std::endl;

    // Ask user for the month
    std::cout << "Enter the name of a month: ";
    std::cin >> month;

    // Validate month using simple if check
    if (
        month != "January" && month != "February" && month != "March" &&
        month != "April" && month != "May" && month != "June" &&
        month != "July" && month != "August" && month != "September" &&
        month != "October" && month != "November" && month != "December") {
        std::cout << "Invalid month! Please restart and enter";
        std::cout << " a valid month name." << std::endl;
        std::cout << ("\n");
        return 0;
    }

    // Ask user for the year
    std::cout << "Enter a year (e.g., 2024): ";
    std::cin >> year;

    // If input failed (e.g., user entered text), handle the error
    if (std::cin.fail()) {
        std::cout << "Invalid year! Please restart and enter a number."
                  << std::endl;
        return 0;
    }

    // Check for February and leap year, with nested if and bool operators
    if (month == "February") {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            std::cout << "There are 29 days in " << month << " of " << year
                      << " (leap year)." << std::endl;
        } else {
            std::cout << "There are 28 days in " << month << " of " << year
                      << " (not a leap year)." << std::endl;
        }
    } else if (
        month == "April" || month == "June" ||
        month == "September" || month == "November") {
        std::cout << "There are 30 days in " << month << " of " << year
                  << "." << std::endl;
    } else {
        std::cout << "There are 31 days in " << month << " of " << year
                  << "." << std::endl;
    }

    return 0;
}
