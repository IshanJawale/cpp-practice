#include <iostream>
#include <cmath>
using namespace std;
class Cylinder {
    private:    // the radius and height cannot be changed outside the class Cylinder
        double radius {3.0};
        double height {1.5};
    public:
        double volume()
        {
            return 3.14*radius*radius*height;
        } 
};

int main()
{
    Cylinder cylinder1;
    cout << "The volume of the cylinder is: " << cylinder1.volume() << endl;
    //cylinder1.radius = 1.5;   *Cannot be changed since the radius and height is private*
    //cylinder1.height = 3.0;
    //cout << "The volume of the cylinder (new) is: " << cylinder1.volume() << endl;
    Cylinder cylinder2;     // Can make many cylinders...
    return 0;
}