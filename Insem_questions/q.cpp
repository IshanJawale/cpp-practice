#include <iostream>
using namespace std;
class Name {
    string name;
    public:
    Name () {
        //string name;
        cout << "Enter the name: ";
        cin >> name;
    }

    void n_display(){
        cout << "The name is: " << name << endl;
    }
};

class Roll {
    int roll;
    public:
    Roll() {
        //int roll;
        cout << "Enter the roll no: ";
        cin >> roll;
    }
    void r_display() {
        cout << "The roll no is: " << roll << endl;
    }
};

class Grade {
    char grade;
    public:
    Grade() {
        //char grade;
        cout << "Enter the grade: ";
        cin >> grade;
    }
    void g_display() {
        cout << "The grade is: " << grade << endl;
    }
};

int main()
{
    Name n[3];
    Roll r[3];
    Grade g[3];
    for (int i = 0; i<3; i++)
    {
        n[i].n_display();
        r[i].r_display();
        g[i].g_display();
    }
    return 0;
}
