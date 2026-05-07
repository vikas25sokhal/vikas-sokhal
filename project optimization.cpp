#include <iostream>
#include <string>
using namespace std;

class Project {
public:
    string name;
    float profit;
    float time;
    float risk;
    float score;

    void input() {
        cout << "Enter project name: ";
        cin >> name;

        cout << "Enter expected profit: ";
        cin >> profit;

        cout << "Enter completion time (months): ";
        cin >> time;

        cout << "Enter risk (1 to 10): ";
        cin >> risk;
    }

    void calculateScore() {
        // Simple AI-like scoring formula
        score = (profit * 2) - (time * 3) - (risk * 5);
    }

    void display() {
        cout << "\nProject: " << name << endl;
        cout << "Profit: " << profit << endl;
        cout << "Time: " << time << endl;
        cout << "Risk: " << risk << endl;
        cout << "Score: " << score << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of projects: ";
    cin >> n;

    Project p[100];

    for (int i = 0; i < n; i++) {
        cout << "\n--- Project " << i + 1 << " ---\n";
        p[i].input();
        p[i].calculateScore();
    }

    int best = 0;

    for (int i = 1; i < n; i++) {
        if (p[i].score > p[best].score) {
            best = i;
        }
    }

    cout << "\n===== All Projects =====\n";
    for (int i = 0; i < n; i++) {
        p[i].display();
    }

    cout << "\n===== Best Project =====\n";
    p[best].display();

    return 0;
}