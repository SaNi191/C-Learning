#include <iostream>
#include "Sales_item.h"


std::istream& operator>> (std::istream& is, Sales_item& item) {
        is >> item.IBN >> item.sold_copies >> item.price_sold;
        item.total_revenue = item.sold_copies * item.price_sold;
        return is;
}

std::ostream& operator<< (std::ostream& os, Sales_item& item) {
    os << item.IBN << " " << item.sold_copies << " " << item.total_revenue << " " << item.get_average() << std::endl;
    return os;
}

Sales_item& operator+ (Sales_item & first, Sales_item & second) {
    if (first.IBN == second.IBN) {
        // we can add them, they are the same book
        first.total_revenue += second.total_revenue;
        first.price_sold = second.price_sold;
        first.sold_copies += second.sold_copies;
    } else {
        std::cerr << "Error: Different IBN!" << std::endl;
    }

    return first;
}

float Sales_item::get_average() {
    return total_revenue / sold_copies;
}


void Sales_item::print_info() {
    total_revenue = price_sold * sold_copies;
    std::cout << IBN << " " << sold_copies << " " << total_revenue << " " << get_average() << std::endl;
}
    
// ts some tomfoolery right here