#include <iostream>

int main()
{
    const int size = 5;
    int* arr = new int[size];

    for (int i = 0; i < size; ++i)
    {
        std::cin >> arr[i];
    }
    int j = 0;
    for (int i = 0; i < size; ++i)
    {
        
        if (arr[i] != 0)
        {
            std::swap(arr[i],arr[j]);
            ++j;
        }
    }

    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
    delete[] arr;
    return 0;
}