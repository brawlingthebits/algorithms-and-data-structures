#include <iostream>
using namespace std;

int main() {
    int outlets[4];
    
    for (int i=0; i< 4; i++) {
        cin >> outlets[i];
    }

    int freeOutlets;
    for (int i=0; i<3; i++) {
        outlets[i] = outlets[i] - 1;   
    }

    int sum=0;

    for (int i=0; i<4; i++) {
        sum += outlets[i];
    }

    cout << sum << endl;

    return 0;
}