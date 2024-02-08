#include <iostream>
using namespace std;

/* 
10 is the first year (after christian era) that the comet came,
so, we subtract the entered year for ten and divide it for
the necessary years to the comet come
*/

int main() {
    long long currentYear, nextYear;

    cin >> currentYear;

    nextYear = (currentYear - 10) / 76;
    nextYear++;

    cout << nextYear * 76 + 10 << endl;

    return 0;
}