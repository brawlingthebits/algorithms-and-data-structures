#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double A, B, C, D, E, F, AB, CD, EF, Product, Total;
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;
    cin >> E;
    cin >> F;

    AB = A + B;
    CD = C - D;
    EF = E + F;
    Product = AB*CD*EF;
    Total = Product/2.0;

    cout << "Eu sou FERA nas continhas e o resultado é " << fixed << setprecision(1) << Total << endl;
    
    return 0;
}