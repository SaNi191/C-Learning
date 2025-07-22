#include <iostream>
#include "Sales_item.h"


float Sales_item::get_average() {
    return total_revenue / sold_copies;
}

void Sales_item::sold_unit(int units_sold, int price) {
    sold_copies += units_sold;
    total_revenue += price * units_sold;
    price_sold = price;
}

void Sales_item::print_info() {
    total_revenue = price_sold * sold_copies;
    std::cout << IBN << " " << sold_copies << " " << total_revenue << " " << get_average() << std::endl;
}
    
// ts some tomfoolery right here