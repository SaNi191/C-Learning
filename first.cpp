#include <iostream>
// we have seen these headers before in C, executes before compilation for linking
// can add other source files or, in this case, include standard libraries using angle brackets


int main() {
    int cur_year = 2025;
    std::cout << "Enter your birth year: " << std::endl;
    int birth_year = 0;
    std::cin >> birth_year;
    std::cout << "You are " << cur_year - birth_year << " years old" << std::endl;
    return 0;
}
// first program :skull: absolute dogwater?



