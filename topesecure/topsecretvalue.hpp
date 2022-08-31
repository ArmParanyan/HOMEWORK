#include <iostream>
#include <string>

class Something
{
public:
    Something() { topSecretValue = 42; }
    bool somePublicBool;
    int somePublicInt;
    std::string somePublicString;
private:
    int topSecretValue;
};

class Example
{

public:
    int get_topSecret_Value() 
    {
        return topSecretValue;
    }
    Example() { topSecretValue = 42; }
    bool somePublicBool;
    int somePublicInt;
    std::string somePublicString;
private:
    int topSecretValue ;
};
