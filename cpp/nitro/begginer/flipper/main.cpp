#include <iostream>
using namespace std;

int main() {

    int p, r;
    cin >> p >> r;
  
    if (p == 0) {
        cout << "C" << endl;
    }
    if (p == 1) {
        if (r == 0) {
        cout << "B" << endl;
        }
        if (r == 1) {
        cout << "A" << endl;
        }
    }
    return 0;
}