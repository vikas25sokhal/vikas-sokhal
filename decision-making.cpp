#include <iostream>
using namespace std;

int main() {
    int marks, attendance;

    cout << "Enter marks: ";
    cin >> marks;

    cout << "Enter attendance percentage: ";
    cin >> attendance;

    if (marks >= 50 && attendance >= 75) {
        cout << "Pass and Eligible for exam";
    }
    else if (marks >= 50 && attendance < 75) {
        cout << "Pass but Not Eligible due to low attendance";
    }
    else if (marks < 50 && attendance >= 75) {
        cout << "Fail but attendance is sufficient";
    }
    else {
        cout << "Fail and Not Eligible";
    }

    return 0;
}