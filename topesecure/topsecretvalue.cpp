#include <iostream>

#include "topsecretvalue.hpp"

int main() {
    // Example ob;
    Example obj;

    int* ptr = reinterpret_cast<int*>(&obj);
    std::cout << *ptr << std::endl;
}