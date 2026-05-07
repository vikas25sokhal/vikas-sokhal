#include <iostream>
#include <string>
using namespace std;

int main() {
    string username, password;

    string correctUsername = "admin";
    string correctPassword = "1234";

    cout << "===== Login System =====" << endl;

    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    if (username == correctUsername && password == correctPassword) {
        cout << "Login successful!" << endl;
    } else {
        cout << "Invalid username or password." << endl;
    }

    return 0;
}