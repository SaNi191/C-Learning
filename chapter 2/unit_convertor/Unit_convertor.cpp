#include "Unit_convertor.h"
#include <iostream>
#include <string>
#include <vector>

auto all_convertors = std::vector<Unit_convertor>();


double convert(const double &val, const std::string &unit, Unit_convertor &convertor) {
    double result;
    if (unit == convertor.base_unit) {
        result = convertor.forward_rate * val + convertor.adjustment;
    } else if (unit == convertor.result_unit) {
        result = convertor.backward_rate * val - convertor.adjustment;
    } else {
        std::cout << "Error: Unknown Unit!" << std::endl;
        result = 0;
    }

    return result;
}


Unit_convertor create(void) {
    std::cout << "Enter Result Unit: ";
    std::string result_unit;
    std::cin >> result_unit;

    std::cout << "Enter Base Unit: ";
    decltype(result_unit) base_unit;
    std::cin >> base_unit;

    std::cout << "Conversion Multiplier: ";
    double forward_rate;
    std::cin >> forward_rate;

    decltype(forward_rate) backward_rate;

    if (forward_rate != 0) {
        backward_rate = 1/forward_rate;
    } else {
        std::cout << "Reverse Conversion Multiplier: ";
        std::cin >> backward_rate;
    }

    std::cout << "Adjustment: ";
    double adjustment;
    std::cin >> adjustment;

    Unit_convertor temp = {forward_rate, backward_rate, adjustment, result_unit, base_unit};
    return temp;
}


// create default convertors
void init_default() {
    Unit_convertor celsius_to_fahrenheit = {1.8, 0.556, 32, "Fahrenheit", "Celsius"};
    Unit_convertor meter_to_foot = {3.280, 0.305, 0, "Foot", "Meter"};
    Unit_convertor kilogram_to_pound = {2.205, 0.454, 0, "Pound", "Kilogram"};

    all_convertors.push_back(celsius_to_fahrenheit);
    all_convertors.push_back(meter_to_foot);
    all_convertors.push_back(kilogram_to_pound);

    return;
}