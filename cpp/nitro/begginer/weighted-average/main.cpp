#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double grades[3], total, media;

    for (int i = 0; i < 3; i++) {
        cin >> grades[i];
    }

    total = (float)(grades[0]*4) + (float)(grades[1]*4) + (float)(grades[2]*2);
    media = (float)total/(float)10;

    cout << std::fixed << std::setprecision(2) << media << endl;

    return 0;
}