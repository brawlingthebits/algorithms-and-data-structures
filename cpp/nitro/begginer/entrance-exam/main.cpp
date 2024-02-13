#include <iostream>
using namespace std;

int main() {
    int questions;
    cin >> questions;

    char choices[questions], answers[questions];

    for (int i = 0; i < questions; i++) {
        cin >> choices[i];
    }

    for (int i = 0; i < questions; i++) {
        cin >> answers[i];
    }

    int points = 0;

    for (int j = 0; j < questions; j++) {
        if (choices[j] == answers[j]) {
            points++;
        }
    }

    cout << points << endl;

    return 0;
}