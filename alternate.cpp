#include<iostream>
using namespace std;

class Car 
{
    private:
        string car_name;
        string car_company;
        string fuel;
        double cost;
    public:
        void set(string cname, string ccompany, string cfuel, double ccost)
        {
            cname = car_name;
            ccompany = car_company;
            cfuel = fuel;
            ccost = cost;
        } 

        void display(string cname, string ccompany, string cfuel, double ccost)
        {
            cout << "The name of the car is: " << cname << endl
                 << "The name of the company of the car is: " << ccompany << endl
                 << "The fuel used in the car is: " << cfuel << endl
                 << "The cost of the car is: " << ccost << endl;
        }
}car1;

int main()
{
    car1.set("Bolero", "Mahindra", "Diesel", 1000000);
    car1.display("Bolero", "Mahindra", "Diesel", 1000000);
    return 0;
}