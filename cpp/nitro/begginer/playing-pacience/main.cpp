#include <iostream>
using namespace std;

int main() {

    int deck[5];

    for (int i=0; i<5; i++) {
        cin >> deck[i];
    }

    bool asc = false;
    bool desc = false;

    for (int i=1; i<5; i++) {
        if (deck[i] > deck[i-1]) {
            asc = true;
        }
        if (deck[i] < deck[i-1]) {
            desc = true;
        }
    }

    if (asc && desc) {
        cout << "N" << endl;
    }
    else if (asc) {
        cout << "C" << endl;
    }   
    else if (desc) {
        cout << "D" << endl;
    }
    return 0;
}