#include <iostream>
#include <string>

using namespace std;

int main() {

    int initialQueueLength;
    cin >> initialQueueLength;

    int initialQueuePeople[initialQueueLength];

    for (int i=0; i < initialQueueLength; i++) {
        cin >> initialQueuePeople[i];
    }

    int leftQueuePeopleLength;
    cin >> leftQueuePeopleLength;
    int leftQueuePeople[leftQueuePeopleLength];

    for (int j=0; j < leftQueuePeopleLength; j++) {
        cin >> leftQueuePeople[j];
    }

    for (int x=0; x < initialQueueLength; x++) {
        for (int y=0; y < initialQueueLength; y++) {
            if(initialQueuePeople[x] != leftQueuePeople[y]) {
                // put the person who is not in the left queue
                cout << initialQueuePeople[x] << " ";
            }
        }
    }

    return 0;

}

