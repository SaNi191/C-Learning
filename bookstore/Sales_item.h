#include <string>

#ifndef Sales_item_H
#define Sales_item_H

class Sales_item {
public:
    std::string IBN;
    int sold_copies;
    float price_sold;
    float total_revenue;

    friend std::istream& operator>> (std::istream& is, Sales_item& item);

    friend std::ostream& operator<< (std::ostream& os, Sales_item& item);

    // only valid if IBN of first and second match
    friend Sales_item& operator+ (Sales_item& first, Sales_item& second);
    float get_average();

    void print_info();
};

#endif

