#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item book1;
    std::cout << "Enter IBN, sold copies, price sold" << std::endl;
    std::cin >> book1.IBN >> book1.sold_copies >> book1.price_sold;
    book1.print_info();


    return 0;
}


