#include <iostream>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int xAxis = x2-x1; 
    int yAxis = y2-y1;
    int totalCrossroads = xAxis + yAxis;
    cout << totalCrossroads << endl;

    return 0;
}