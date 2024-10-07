#include <iostream>
using namespace std;

int main()
{
    double farenheit, celsius;
    cout << "Enter the temparature in faranheit: ";
    cin >> farenheit;
    celsius = ((farenheit-32)*5)/9;
    cout << "The temperature in Celsius = " << celsius << endl;
    return 0;
}