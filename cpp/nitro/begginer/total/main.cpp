#include <iostream>
using namespace std;

int main() {
    int arraySize, colleagueTotal, realTotal=0;

    cin >> arraySize;

    int bills[arraySize];

    for (int i=0; i < arraySize; i++) {
        cin >> bills[i];
    }

    cin >> colleagueTotal;

    for (int i=0; i < arraySize; i++) {
        realTotal += bills[i];
    }

    if (colleagueTotal == realTotal) {
        cout << "Acertou" << endl;
    } else {
        cout << "Errou" << endl;
    }

    return 0;
}