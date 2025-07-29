#include <iostream>
#include "sales_data.h"
// add tag -I ../chapter\ 2 to compilation
// do not include ../chapter\ 2/sales_data.cpp
using std::cin; using std::cout; using std::endl;

int main () {

    // 1.4.1 with using declarations
    int lbound, hbound;
    cout << "Lower Bound: ";
    cin >> lbound;
    cout << "Upper Bound: ";
    cin >> hbound;

    int sum = 0;
    while (lbound <= hbound) {
        sum += lbound;
        lbound++;
    }

    cout << "Sum: " << sum << endl;

    // 2.6.2 with using declarations
    Sales_data my_data;
    cin >> my_data.IBN >> my_data.price >> my_data.revenue >> my_data.sales;
    cout << "IBN: " << my_data.IBN << endl;
    cout << "Price: $" << my_data.price << endl;
    cout << "Revenue: $" << my_data.revenue << endl;
    cout << "Total Sales: " << my_data.sales << endl;

}