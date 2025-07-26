#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>

// using struct to define Sales_data class
struct Sales_data {
    std::string IBN;
    unsigned sales;
    double price;
    double revenue;
};

#endif