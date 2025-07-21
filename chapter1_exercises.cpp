#include <iostream>

int main () {

    std::cout << "Hello World!" << std::endl;
    std::cout << "Enter two nums:" << std::endl;
    int num1 = 0;
    int num2 = 0;

    std::cin >> num1 >> num2;
    std::cout << "The product is " << num1 * num2 << std::endl;


    std::cout << "/*";
    std::cout << "*/"; 
    std::cout << /* "*/" */";
    std::cout << /* "*/" /* "/*" */;
    return 0;
}