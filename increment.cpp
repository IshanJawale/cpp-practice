#include <iostream>
int main()
{
    int x = 10;
    int y = x++;        // here x = 11, y = 10
    // int y = ++x;         //here x = 11, y = 11
    std::cout << x;
    std::cout << "\n";
    return 0;
}