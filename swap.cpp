#include <iostream>
int main()
{
    int value1 = 100;
    int value2 = 200;
    int temp = value1;
    value1 = value2;
    value2 = temp;
    std::cout << value1;
    std::cout << value2;
    return 0;
}