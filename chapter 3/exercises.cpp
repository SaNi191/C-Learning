#include <iostream>

using std::cin; using std::cout; using std::endl;

int main () {
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
    
}