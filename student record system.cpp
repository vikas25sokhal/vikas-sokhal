#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    float marks;
};

int main() {
    Student s[100];
    int n = 0;
    int choice;

    do {
        cout << "\n===== Student Record System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by Roll No\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter Roll No: ";
                cin >> s[n].rollNo;
                cin.ignore();

                cout << "Enter Name: ";
                getline(cin, s[n].name);

                cout << "Enter Marks: ";
                cin >> s[n].marks;

                n++;
                cout << "Student record added successfully!\n";
                break;

            case 2:
                if(n == 0) {
                    cout << "No records found.\n";
                } else {
                    cout << "\nStudent Records:\n";
                    for(int i = 0; i < n; i++) {
                        cout << "Roll No: " << s[i].rollNo << endl;
                        cout << "Name: " << s[i].name << endl;
                        cout << "Marks: " << s[i].marks << endl;
                        cout << "---------------------\n";
                    }
                }
                break;

            case 3: {
                int roll;
                bool found = false;

                cout << "Enter Roll No to search: ";
                cin >> roll;

                for(int i = 0; i < n; i++) {
                    if(s[i].rollNo == roll) {
                        cout << "\nStudent Found:\n";
                        cout << "Roll No: " << s[i].rollNo << endl;
                        cout << "Name: " << s[i].name << endl;
                        cout << "Marks: " << s[i].marks << endl;
                        found = true;
                        break;
                    }
                }

                if(!found) {
                    cout << "Student not found.\n";
                }
                break;
            }

            case 4:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while(choice != 4);

    return 0;
}