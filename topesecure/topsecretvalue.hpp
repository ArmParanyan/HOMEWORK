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
private:
    int topSecretValue ;
public:
    Example() { topSecretValue = 42; }
    bool somePublicBool;
    int somePublicInt;
    std::string somePublicString;
};
