#include <iostream>
using namespace std;

int main() {
    int choice;
    double value, result;

    do {
        cout << "\n===== Dynamic Unit Converter =====\n";
        cout << "1. Kilometers to Meters\n";
        cout << "2. Meters to Kilometers\n";
        cout << "3. Kilograms to Grams\n";
        cout << "4. Grams to Kilograms\n";
        cout << "5. Celsius to Fahrenheit\n";
        cout << "6. Fahrenheit to Celsius\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0) {
            cout << "Exiting...\n";
            break;
        }

        cout << "Enter value: ";
        cin >> value;

        switch (choice) {
            case 1:
                result = value * 1000;
                cout << "Result: " << result << " meters\n";
                break;

            case 2:
                result = value / 1000;
                cout << "Result: " << result << " kilometers\n";
                break;

            case 3:
                result = value * 1000;
                cout << "Result: " << result << " grams\n";
                break;

            case 4:
                result = value / 1000;
                cout << "Result: " << result << " kilograms\n";
                break;

            case 5:
                result = (value * 9 / 5) + 32;
                cout << "Result: " << result << " Fahrenheit\n";
                break;

            case 6:
                result = (value - 32) * 5 / 9;
                cout << "Result: " << result << " Celsius\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (true);

    return 0;
}