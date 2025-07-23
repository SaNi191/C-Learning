#include <iostream>

int for_loop_version() {
    std::cout << "Low Bound: " << std::endl;
    int lb = 0, hb = 0;
    std::cin >> lb;
    std::cout << "High Bound: " << std::endl;
    std::cin >> hb;

    if (lb > hb) {
        int temp = hb;
        hb = lb;
        lb = temp;
    }

    int sum = 0;
    for (int i = lb; i <= hb; i++) {
        sum += i;
    }

    std::cout << "The sum of LB to HB inclusive is " << sum << std::endl;
    return sum;
}

int main() {
    std::cout << "Low Bound: " << std::endl;
    int lb = 0, hb = 0;
    std::cin >> lb;
    std::cout << "High Bound: " << std::endl;
    std::cin >> hb;

    int sum = 0;
    while (lb <= hb) {
        sum += lb;
        lb++;
        std::cout << "Current Sum: " << sum << std::endl;
    }

    std::cout << "The sum of LB to HB inclusive is " << sum << std::endl;

    for_loop_version();
}


