#include <iostream>
using namespace std;

int main() {
    int Q1, Q2, Q3, E1, E2, E3, huntedEggs, lostedEggs, totalEggs;
    cin >> Q1 >> Q2 >> Q3;
    cin >> E1 >> E2 >> E3;

    huntedEggs = Q1 + Q2 + Q3;
    lostedEggs = E1*3 + E2*3 + E3*3;

    totalEggs = huntedEggs - lostedEggs;

    cout << totalEggs << endl;

    return 0;
}