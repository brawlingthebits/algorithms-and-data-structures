#include <iostream>
using namespace std;

int main() {
    int p1, c1, p2, c2, left, right;
    cin >> p1 >> c1 >> p2 >> c2;
    left = p1*c1;
    right = p2*c2;
    if (left == right) {
        cout << 0 << endl;
    }
    if (left < right) {
        cout << 1 << endl;
    }
    if (left > right) {
        cout << -1 << endl;
    }
    
    return 0;
}