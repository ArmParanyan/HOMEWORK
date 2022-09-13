#include <iostream>

class Final
{
private:
    ~Final() {}
    friend class Base;
};

class Base : virtual public Final
{
public:
    Base() {}
};

class Derived : public Base
{
public:
    Derived () {}
};

int main() 
{
    return 0;
}