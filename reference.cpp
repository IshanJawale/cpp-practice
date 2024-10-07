#include <iostream>
using namespace std;
int main()
{
    int value1{86};
    int value2{45};
    int& reference_to_value1{value1};
    int& reference_to_value2{value2};
    cout << "value1: " << value1 << endl
         << "value2: " << value2 << endl
         << "reference_to_value1: " << reference_to_value1 << endl
         << "reference_to_value2: " << reference_to_value2 << endl
         << "&value1: " << &value1 << endl
         << "&value2: " << &value2 << endl
         << "&reference_to_value1: " << &reference_to_value1 << endl
         << "&reference_to_value2: " << &reference_to_value2 << endl
         << "sizeof(int): " << sizeof(int) << endl
         << "sizeof(int&): " << sizeof(int&) << endl
         << "sizeof(reference_to_value1): " << sizeof(reference_to_value1) << endl
         << "sizeof(&value1): " << sizeof(&value1) << endl
         << "sizeof(&reference_to_value1): " << sizeof(&reference_to_value1) << endl;

    return 0;
}