#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    float marks1, marks2, marks3;
    float average;

public:
    void input() {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter marks of 3 subjects: ";
        cin >> marks1 >> marks2 >> marks3;
    }

    void calculate() {
        // Debugged: correct average formula
        average = (marks1 + marks2 + marks3) / 3;
    }

    void showGrade() {
        if (average >= 80)
            cout << "Grade: A" << endl;
        else if (average >= 60)
            cout << "Grade: B" << endl;
        else if (average >= 40)
            cout << "Grade: C" << endl;
        else
            cout << "Grade: Fail" << endl;
    }

    void display() {
        cout << "\nStudent Name: " << name << endl;
        cout << "Average Marks: " << average << endl;
        showGrade();
    }
};

int main() {
    Student s;

    s.input();
    s.calculate();
    s.display();

    return 0;
}