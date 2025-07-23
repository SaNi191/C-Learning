#include <iostream>
#include "Sales_item.h"

void read();

int main() {
    Sales_item book1;
    std::cout << "Enter IBN, sold copies, price sold" << std::endl;
    std::cin >> book1;
    std::cout << book1;

    Sales_item book2;
    std::cout << "Enter IBN, sold copies, price sold" << std::endl;
    std::cin >> book2;
    std::cout << book2;

    std::cout << book1 + book2;

    read();

    return 0;
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

