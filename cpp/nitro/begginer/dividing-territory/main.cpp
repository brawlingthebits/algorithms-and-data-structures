#include <iostream>
using namespace std;

int main() {
    int territories;
    cin >> territories;
    int sections[territories];

    int totalTerritory = 0; 

    for (int i = 0; i < territories; i++) {
        cin >> sections[i];
        totalTerritory += sections[i];
    }

    int territoryMiddle = 0;
    for (int j = 0; j < territories; j++) {
        territoryMiddle += sections[j];
        if (territoryMiddle == totalTerritory/2) {
            cout << j+1 << endl;
            break;
        }
    }
    return 0;
}