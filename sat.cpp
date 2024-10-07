#include <iostream>
#include <vector>
using namespace std;

class Student {
    string name;
    int roll;
    char div;
public:
    Student() {
        cout << "Enter the name of the student: ";
        cin >> name;
        cout << "Enter the roll number of the student: ";
        cin >> roll;
        cout << "Enter the division of the student: ";
        cin >> div;
    }
    ~Student() {
        cout << "The name of the student is: " << name << endl
             << "The roll number of the student is: " << roll << endl
             << "The division of the student is: " << div << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    vector<Student> students(n);

    return 0;
}
