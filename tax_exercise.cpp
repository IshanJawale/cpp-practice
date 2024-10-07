#include <iostream>
using namespace std;

int main()
{
    double sales = 95000, state_tax, county_tax;
    state_tax = (4*95000)/100;
    county_tax = (2*95000)/100;
    cout << "Total sales = " << sales << endl
         << "The Sales Tax = " << state_tax << endl
         << "The County Tax = " << county_tax << endl
         << "The total Tax = " << state_tax + county_tax << endl;
    return 0;
}