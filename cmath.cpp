#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x = 3.64;
    cout << "The function 'floor()' rounds down the variable of float type, so floor(x) = " <<floor (x) << endl;
    double y = 9.54; 
    cout << "The function 'round()' rounds the variable of double type, so round(y) = " << round (y) << endl;
    double power = pow(2,3);
    cout << "The pow() function is used for find the power of a number, so pow(2,3) = " << power << endl;
    return 0;
}