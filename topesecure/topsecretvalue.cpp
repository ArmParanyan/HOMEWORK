#include <iostream>

#include "topsecretvalue.hpp"

int main() {
    Example* ptr;
    Something obj;

     ptr = reinterpret_cast<Example*>(&obj);
    std::cout << ptr->get_topSecret_Value() << std::endl;
}
