#include <iostream>
using namespace std;

int main() {
    long long volume, totalPrice=7;

    cin >> volume; 

    if (volume > 100) {
        totalPrice += (volume-100)*5;
        volume -= (volume-100);
    }
    if (volume > 30) {
        totalPrice += (volume-30)*2;
        volume -= (volume-30);
    }
    if (volume > 10) {
        totalPrice += (volume-10);
        volume -= (volume-10);
    }

    cout << totalPrice << endl;

    return 0;
}