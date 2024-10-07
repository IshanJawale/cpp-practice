#include<iostream>
using namespace std;
int main()
{
    
    int var {45};
    int *address{&var}; // *address stores the address of the variable var (&)...
    cout << "The value of the variable: " << var << endl
         << "The address of the varable var is: " << address << endl;
    // you can also change the address stored inside the pointer any time...
    int var_new {56};
    address = &var_new;
    cout << "The value of variable var_new is: " << var_new << endl
         << "The address of the variable var_new stored again in address is: "<< address << endl;

    // can't cross assign between pointers of different types
    /*
    like...
    int *ptr {nullptr};
    double var {45.6};
    ptr = &var      
    the above statement is incorrect (compiler error)
    */ 

    // deferencing a pointer: (to get the value of the variable through a pointer)
    int var2 {96};
    int *ptr_var2 {nullptr};
    ptr_var2 = &var2;
    cout << "The value of the variable: " << *ptr_var2 << endl;
    return 0;
}