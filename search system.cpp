#include <iostream>
#include <string>
using namespace std;

struct Student {
    int roll;
    string name;
};

int main() {
    Student s[5];

    // Input student data
    for (int i = 0; i < 5; i++) {
        cout << "Enter roll number of student " << i + 1 << ": ";
        cin >> s[i].roll;
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> s[i].name;
    }

    int searchRoll;
    bool found = false;

    // Search input
    cout << "\nEnter roll number to search: ";
    cin >> searchRoll;

    // Search process
    for (int i = 0; i < 5; i++) {
        if (s[i].roll == searchRoll) {
            cout << "\nStudent Found!\n";
            cout << "Roll Number: " << s[i].roll << endl;
            cout << "Name: " << s[i].name << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "\nStudent not found." << endl;
    }

    return 0;
}