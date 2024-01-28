#include <iostream>
#include <string>

using namespace std;

struct Person {
    string name;
    int age;
};

int main() {

    int queueLength = 10;

    Person queue[queueLength];
    int currentPosition = -1;

    char option;

    while (cin >> option && option != 'p') {

        if (option == '+') {
            
            Person newPerson;
            cin >> newPerson.name >> newPerson.age;
            cout << newPerson.name << " entered the queue" << endl;

            if (currentPosition +1 >= queueLength) {
                cout << "Queue is full" << endl;
            } else {
                queue[++currentPosition] = newPerson;
            }

        } else if (option == '-') {
            
            string gaveUpName;
            cin >> gaveUpName;
            int gaveUpPosition = -1;

            for (int i=0; i < currentPosition; i++) {
                if (queue[i].name == gaveUpName) {
                    gaveUpPosition = i;
                    break;
                }
            }

            if (gaveUpPosition == -1) {
                cout << "Person not found" << endl;
                continue;
            }

            for (int i=gaveUpPosition; i < currentPosition; i++) {
                queue[i] = queue[i+1];
            }
    
            currentPosition = currentPosition - 1;
            cout << gaveUpName << " left the queue" << endl;

        } else if (option == 's') {
    
            if (currentPosition == -1) {
                cout << "Queue is empty" << endl;
                continue;
            }

            Person nextInTheQueue = queue[0];
            cout << "serving " << nextInTheQueue.name << endl;

            for (int i=0; i < currentPosition; i++) {
                queue[i] = queue[i+1];
            }

            currentPosition = currentPosition - 1;

        } else {
            cout << "Invalid option" << endl;
        }
    }
}

/* 
Enter:
+ Damazio 36
+ Micael 25
+ Yan 22
+ Ana 30
+ Gabriel 23
- Micael
s
s
- Ana
- Damazio
*/

/* while (cin >> option && option != "p") {

        swich (option) {
            case "+": // insert
            break;

            case "-": // remove
            break;

            case "s": // serve
            break;
        } */
