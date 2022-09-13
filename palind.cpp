#include <iostream>

int main()
{
    const int size = 26;
    int arr[26];

    std::string str = "Tact Coa";
    std::string res = "";

    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        if (str[i] != ' ')
        {
            res += str[i];
        }
    }

    for (int i = 0;i < res.size(); ++i) 
    {
        char ch = res[i] - 97;
        ++arr[ch];
    }
    int count = 0;
    for (int i = 0;i < 26; ++i) 
    {
        if (arr[i] % 2 == 1) 
        {
            ++count;
        }
    }

    if (count <= 1) 
    { 
        std::cout << std::boolalpha << true;
    } else 
    {
        std::cout << std::boolalpha << false;
    }
}