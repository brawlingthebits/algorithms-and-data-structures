#include <iostream>
using namespace std;

int main() {

    int arraySize, rewarded;
    
    cin >> arraySize ;

    int playersArray[arraySize];
    
    for (int i=0; i < arraySize; i++) {
        cin >> playersArray[i];
    }

    cin >> rewarded;

    bool hasWinner = false;

    for (int i=0; i < arraySize; i++) {
        if (playersArray[i] == rewarded) {
            hasWinner = true;
            cout << "Número da poltrona do vencedor: " << i << endl;
        }
    }
    if (!hasWinner) {
        cout << "Não há vencedor" << endl;
    }

    return 0;
}