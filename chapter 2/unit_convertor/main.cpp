#include "Unit_convertor.h"
#include <iostream>
#include <string>

const std::string menu_text = "What would you like to do:\n---------\n1. Convert\n2. New Convertor\n-1. Quit\n---------\n";


void menu(unsigned choice) {
    if (choice == 1) {
        int i = 1;
        for(auto &convertor:all_convertors) {
            std::cout << "(" << i  << ") " << convertor.base_unit << " to " << convertor.result_unit << std::endl;
            i++;
        }
        std::cout << "Choice: ";
        std::cin >> choice;
        choice--;
        // choice now contains the index of the desired convertor within all_convertors

        // test:
        std::cout << all_convertors[i].base_unit << " to " << all_convertors[i].result_unit << " selected!" << std::endl;

    } else if (choice == 2) {
        // New convertor, create returns convertors
        Unit_convertor new_convertor = create();
        // assume create returns a valid Unit_convertor
        all_convertors.push_back(new_convertor);
    }
    
}


int main() {
    init_default();

    std::cout << menu_text;
    std::cout << "Choice: ";

    int choice = 0;
    std::cin >> choice;
    
    while(choice != -1) {
        menu(choice);

        std::cout << menu_text << "Choice: " << std::endl;
        std::cin >> choice;
    }

}