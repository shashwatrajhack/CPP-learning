#include <iostream>
#include <typeinfo>

int main() {
    int i = 42;
    double d = 3.14;
    const char* str = "Hello, C++";

    // Using typeid to get type information
    std::cout << "Type of i: " << typeid(i).name() << std::endl;
    std::cout << "Type of d: " << typeid(d).name() << std::endl;
    std::cout << "Type of str: " << typeid(str).name() << std::endl;

    return 0;
}
