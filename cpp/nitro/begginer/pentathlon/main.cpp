#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int athleteScore[6], totalScore=0;
    double media;

    for (int i = 0; i < 6; i++) {
        cin >> athleteScore[i];
    }

    for (int i = 1; i < 6; i++) {
      totalScore += athleteScore[i];
    }

    media = (float)totalScore/(float)5;

    cout << athleteScore[0] << std::fixed << std::setprecision(1) << " " << media << endl; 

    return 0;
}