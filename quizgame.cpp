#include <iostream>
using namespace std;

int main() {
    char answer;
    int score = 0;

    cout << "===== Simple Quiz Game =====\n";

    cout << "\n1. What is the capital of India?\n";
    cout << "a) Mumbai\nb) New Delhi\nc) Kolkata\nd) Chennai\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'b' || answer == 'B') {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is New Delhi.\n";
    }

    cout << "\n2. Which language is used for C++?\n";
    cout << "a) Markup\nb) Programming\nc) Database\nd) Styling\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'b' || answer == 'B') {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is Programming.\n";
    }

    cout << "\n3. What is 5 + 7?\n";
    cout << "a) 10\nb) 11\nc) 12\nd) 13\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'c' || answer == 'C') {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is 12.\n";
    }

    cout << "\n===== Quiz Finished =====\n";
    cout << "Your score: " << score << " out of 3\n";

    return 0;
}