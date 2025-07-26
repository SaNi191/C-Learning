#include <iostream>

int secret = 12345;

void second() {
    std::cout << secret;
    std::cout << ::secret;
}

int main() {
    std::cout << secret;
    secret = 5;
    std::cout << secret;
    secret++;
    std::cout << secret;
    secret += 1;
    std::cout << secret;
    second();
}


