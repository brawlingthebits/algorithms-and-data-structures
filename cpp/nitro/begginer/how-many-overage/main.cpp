#include <iostream>
using namespace std;

int main() {
    int grades, allGrades=0, average, overAverage=0;
    cin >> grades;
    int score[grades];

    for (int i = 0; i < grades; i++) {
        cin >> score[i];
    }
    for (int i = 0; i < grades; i++) {
        allGrades += score[i];
    }
    average = allGrades/grades;

    for (int i = 0; i < grades; i++) {
        if (score[i] > average) {
          overAverage += 1;
        }
    }

    cout << overAverage << endl;

    return 0;
}