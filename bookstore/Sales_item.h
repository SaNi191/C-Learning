#include <string>

#ifndef Sales_item_H
#define Sales_item_H

class Sales_item {
public:
    std::string IBN;
    int sold_copies;
    float price_sold;
    float total_revenue;

    float get_average();

    void sold_unit(int units_sold, int price);

    void print_info();
};

#endif

