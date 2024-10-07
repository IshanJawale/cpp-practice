#include <iostream>
#include <vector>
using namespace std;
class Student {
    string name;
    int roll;
    string cls;
    char div;
    string date_of_birth;
    long int tele;
public:
    Student() {
        cout << "Enter the name of the student: ";
        cin >> name;
        cout << "Enter the roll number of the student: ";
        cin >> roll;
        cout << "Enter the class of the student: ";
        cin >> cls;
        cout << "Enter the division of the student: ";
        cin >> div;
        cout << "Enter the date of birth of the student: ";
        cin >> date_of_birth;
        cout << "Enter the telephone number of the student: ";
        cin >> tele;
    }
    ~Student() {
        cout << "\n\nThe name of the student is: " << name << endl
             << "The roll number of the student is: " << roll << endl
             << "The class of the student is: " << cls << endl
             << "The division of the student is: " << div << endl
             << "The date of birth of the student is: " << date_of_birth << endl
             << "The telephone number of the student is: " << tele << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of Students: ";
    cin >> n;
    vector <Student> s(n);
    return 0;
}
