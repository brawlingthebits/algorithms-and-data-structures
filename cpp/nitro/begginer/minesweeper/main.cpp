#include <iostream>
using namespace std;

int main() {
    int minefieldLength;
    cin >> minefieldLength;

    int minefield[minefieldLength];
    int finalMinefield[minefieldLength];
    int initialValue = 0;

    for (int i = 0; i < minefieldLength; i++) {
        cin >> minefield[i];
        finalMinefield[i] = initialValue;
    }

    for (int j = 0; j < minefieldLength; j++) {
        if (minefield[j-1] == 1) {
            finalMinefield[j] += 1;
        }
        if (minefield[j] == 1) {
            finalMinefield[j] += 1;
        }
        if (minefield[j+1] == 1) {
            finalMinefield[j] += 1;
        }
    }

    for (int k = 0; k < minefieldLength; k++) {
        cout << finalMinefield[k] << endl;
    }

    return 0;
}