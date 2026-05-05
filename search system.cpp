#include <iostream>
using namespace std;

int main() {
    int ids[5] = {101, 102, 103, 104, 105};
    string names[5] = {"Aman", "Ravi", "Simran", "Karan", "Priya"};

    int searchId;
    bool found = false;

    cout << "Enter student ID to search: ";
    cin >> searchId;

    for (int i = 0; i < 5; i++) {
        if (ids[i] == searchId) {
            cout << "\nStudent Found!" << endl;
            cout << "ID: " << ids[i] << endl;
            cout << "Name: " << names[i] << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "\nStudent not found." << endl;
    }

    return 0;
}