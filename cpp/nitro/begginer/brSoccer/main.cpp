#include <iostream>
using namespace std;

int main() {

    int cv, ce, cs, c, fv, fe, fs, f;

    cin >> cv >> ce >> cs >> fv >> fe >> fs; 

    c = (cv*3) + ce;
    f = (fv*3) + fe; 

    if (c == f) {
        if (cs > fs) {
            cout << "C" << endl;
        }
        if (cs < fs) {
            cout << "F" << endl;
        }
        else {
            cout << "=" << endl;
        }
    }

    if (c > f) {
        cout << "C" << endl;
    }

    if (c < f) {
        cout << "F" << endl;
    }

    return 0;
}