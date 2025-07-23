#include <iostream>
#include "Sales_item.h"

void read();
void count();

int main() {
    /*
    Sales_item book1;
    std::cout << "Enter IBN, sold copies, price sold" << std::endl;
    std::cin >> book1;
    std::cout << book1;

    Sales_item book2;
    std::cout << "Enter IBN, sold copies, price sold" << std::endl;
    std::cin >> book2;
    std::cout << book2;

    std::cout << book1 + book2;
    */
   
    count();

    return 0;
}

void count() {
    Sales_item cur;
    int counter = 1;
    if (std::cin >> cur) {
        Sales_item temp;
        while (std::cin >> temp) {
            if(cur.IBN == temp.IBN) {
                counter++;
            } else {
                std::cout << cur << counter << std::endl;
                cur = temp;
                counter = 1;
            }
        }
    }

}


void read() {
    Sales_item cur;
    if (std::cin >> cur) {
        Sales_item temp;
        while (std::cin >> temp) {
            if(cur.IBN == temp.IBN) {
                cur = cur + temp;
            } else {
                std::cout << cur;
                cur = temp;
            }
        }
    }

}

