#include <iostream>
using namespace std;

int main() {
    
    long long a, b, c, x, y, z, total;

    cin >> a >> b >> c;
    cin >> x >> y >> z;

    total = (x/a) * (y/b) * (z/c);

    cout << total << endl;

    return 0;
}