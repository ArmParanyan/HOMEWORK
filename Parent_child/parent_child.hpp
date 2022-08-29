class Base
{
public:
    Base() = default;
    ~Base() = default;
protected:
    int basedata;

};

class Child1 : public Base
{

};

class Child2 : public Base
{

};

class GrandChild : public Child1, public Child2
{
public:
    int getData() {
        return Child2::basedata;
    }
};