#include <iostream>

#include "forward_list.hpp"

int main()
{
    List obj;
    obj.push_front(5);
    obj.push_front(5);
    obj.push_front(5);
    obj.push_front(5);
    obj.insert(2, 7);

    List obj1;
    obj1.push_front(4);
    obj1.push_front(4);
    obj1.push_front(4);
    std::cout << obj;
}