#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    const double pi = 3.14; // value of pi is constant and cannot be changed afterwards...
    // constant prevents us from accidentally modifying the value later in the program...
    double radius;
    // pi = 3;      here value of constant pi cannot be reassigned...
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    double area;
    area = pi*pow(radius, 2);
    cout << area << endl;
    return 0;
}