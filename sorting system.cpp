#include <iostream>
using namespace std;

int main() {
    int ids[5] = {104, 101, 105, 102, 103};
    string names[5] = {"Karan", "Aman", "Priya", "Ravi", "Simran"};

    // Bubble sort
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (ids[j] > ids[j + 1]) {
                // swap ids
                int tempId = ids[j];
                ids[j] = ids[j + 1];
                ids[j + 1] = tempId;

                // swap names
                string tempName = names[j];
                names[j] = names[j + 1];
                names[j + 1] = tempName;
            }
        }
    }

    cout << "Students after sorting by ID:\n";
    for (int i = 0; i < 5; i++) {
        cout << ids[i] << " - " << names[i] << endl;
    }

    return 0;
}