#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string password;
    bool hasUpper = false, hasLower = false;
    bool hasDigit = false, hasSpecial = false;

    cout << "Enter password: ";
    cin >> password;

    for (int i = 0; i < password.length(); i++) {
        if (isupper(password[i]))
            hasUpper = true;
        else if (islower(password[i]))
            hasLower = true;
        else if (isdigit(password[i]))
            hasDigit = true;
        else
            hasSpecial = true;
    }

    int score = 0;

    if (password.length() >= 8)
        score++;
    if (hasUpper)
        score++;
    if (hasLower)
        score++;
    if (hasDigit)
        score++;
    if (hasSpecial)
        score++;

    cout << "\nPassword Strength: ";

    if (score <= 2)
        cout << "Weak";
    else if (score == 3 || score == 4)
        cout << "Medium";
    else
        cout << "Strong";

    cout << endl;

    return 0;
}