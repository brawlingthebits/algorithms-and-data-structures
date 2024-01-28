// n! = n * (n-1) * (n-2) * (n-3) ...
// 4! = 4 * (4-1) * (4-2) * (4-3) 

#include <iostream>
using namespace std;

int main() {
    int n, total=1;
    cin >> n;

    for (int i = 0; i < n; i ++) {
        total *= (n-i);
    }

    cout << total << endl;

    return 0;
}