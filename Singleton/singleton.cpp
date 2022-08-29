#include <iostream>
#include "singleton.hpp"

int main() {
    Singleton* obj = Singleton::get_instance();
    Singleton* obj2 = Singleton::get_instance();
    Singleton* obj3 = Singleton::get_instance();

    std::cout << obj << std::endl;
    std::cout << obj2 << std::endl;
    std::cout << obj3 << std::endl;
    return 0;

}