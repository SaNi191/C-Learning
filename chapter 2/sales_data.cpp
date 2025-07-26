#include <iostream>
#include <string>
#include "sales_data.h"

int main() {
    Sales_data book1;
    // read into book1
    std::cin >> book1.IBN >> book1.price >> book1.revenue >> book1.sales;

    // pointer to book1 IBN
    const std::string * book1_IBN = &(book1.IBN);

    std::cout << *book1_IBN;
}