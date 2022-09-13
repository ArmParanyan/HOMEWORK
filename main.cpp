#include <iostream>

class A
{
public:
    A()
    {
        std::cout << "A ctor\n" ;
    }
};

class B : public A
{
public:
    B()
    {
        std::cout << "B ctor\n";
    }
};

int main()
{
    B obj;
    A* ptr = &obj;

    A aobj;
    B* bptr = reinterpret_cast<B*>(&aobj);

    return 0;
}