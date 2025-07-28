#ifndef UNIT_CONVERTOR_H
#define UNIT_CONVERTOR_H
#include <vector>
#include <string>

struct Unit_convertor {
    const double forward_rate;
    const double backward_rate;
    const double adjustment;
    const std::string result_unit;
    const std::string base_unit;
};

// will point to an array of convertors
extern std::vector<Unit_convertor> all_convertors;


// purpose: will handle logic regarding conversion utilizing values in Unit_convertor
double convert(const double &val, const std::string &unit, Unit_convertor &convertor);

// purpose: run to create a Unit_convertor
Unit_convertor create(void);


void init_default();


#endif