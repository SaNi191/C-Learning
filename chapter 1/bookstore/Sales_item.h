#include <string>

#ifndef Sales_item_H
#define Sales_item_H

class Sales_item {
public:
    std::string IBN;
    int sold_copies;
    float price_sold;
    float total_revenue;

    // override for cin of Sales_item
    friend std::istream& operator>> (std::istream& is, Sales_item& item);

    // override for cout of Sales_item
    friend std::ostream& operator<< (std::ostream& os, Sales_item& item);

    // only valid if IBN of first and second match
    friend Sales_item& operator+ (Sales_item& first, Sales_item& second);

    // returns average
    float get_average();

    // prints information, depreciated as expected usage utilizes << operator
    void print_info();
};

#endif

