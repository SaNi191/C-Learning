#include "Unit_convertor.h"
#include <iostream>
#include <string>

const std::string menu_text = "What would you like to do:\n---------\n0. Quit\n1. Convert\n2. New Convertor\n---------\n";


void menu(unsigned choice) {
    if (choice == 1) {
        int i = 1;
        for(auto &convertor:all_convertors) {
            std::cout << "(" << i  << ") " << convertor.base_unit << " - " << convertor.result_unit << std::endl;
            i++;
        }
        std::cout << "Choice: ";
        std::cin >> choice;

        if(choice <= 0) {
            std::cout << "Error: invalid choice!" << std::endl;
            return;
        }
        choice--;
        // adjust choice to match index

        if(choice >= all_convertors.size()) {
            std::cout << "Error: selected out of range (" << all_convertors.size() << ")" << std::endl;
            return;
        }

        // set chosen convertor
        Unit_convertor chosen = all_convertors[choice];
        std::cout << chosen.base_unit << " - " << chosen.result_unit << " selected!" << std::endl;


        // input value to convert
        std::cout << "Input value: ";
        double value;
        std::cin >> value;

        // input unit
        std::cout << "Input unit: ";
        std::string unit;
        std::cin >> unit;

        // produce result in an integer, remove decimals which may contain inaccuracies on account of floating point math
        int result = convert(value, unit, chosen);

        // use ternary operator to print out relevant converted unit
        std::cout << result << " " << ((unit == chosen.base_unit) ? chosen.result_unit : chosen.base_unit) << std::endl;
        return;

    } else if (choice == 2) {
        // New convertor, create returns convertors
        Unit_convertor new_convertor = create();
        // assume create returns a valid Unit_convertor
        all_convertors.push_back(new_convertor);
        std::cout << new_convertor.base_unit << " - " << new_convertor.result_unit << " added." << std::endl;

        return;
    } else {
        std::cout << "Error: invalid choice!" << std::endl;
        return;
    }
}


int main() {
    init_default();

    std::cout << menu_text;
    std::cout << "Choice: ";

    int choice = 0;
    std::cin >> choice;
    
    while(choice != 0) {
        menu(choice);

        std::cout << menu_text << "Choice: ";
        std::cin >> choice;
    }
}