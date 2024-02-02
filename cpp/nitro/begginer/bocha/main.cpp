#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int podium[3];
    int n = sizeof(podium) / sizeof(podium[0]);

    for (int i=0; i<3; i++) {
        cin >> podium[i];
    }

    sort(podium, podium+3);

    cout << podium[1] << endl;

    return 0;
}