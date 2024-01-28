# include <iostream>

using namespace std;

void bubbleSort(int numbers[], int n) {
    bool swapped = false;
    
    do {
        swapped = false;
        for (int i = 0; i < n-1; i++) {

            int firstNumber = numbers[i];
            int secondNumber = numbers[i+1];

            if (firstNumber > secondNumber) {
                // swap 
                numbers[i] = secondNumber;
                numbers [i+1] = firstNumber;

                swapped = true;
            }
        }
    } while (swapped);
}

int main() {
    int vector[] = {8, 3, 6, 9, 14, 2, 5};

    bubbleSort(vector, 7);

    for (int i = 0; i < 7; i++) {
        cout << vector[i] << " ";
    }
    cout << endl;
}

/* 
My trial
// One of the most famous algorithms but not for real life.
#include <iostream>

using namespace std;

int main() {
    int array[10] = { 5, 2, 4, 6, 1, 3, 9, 8, 7, 0 };

    int unordered = true

    do {
        for (int i = 0; i < 10; i++) {
            if (array[i] > array[i+1]) {
                // fazer eles trocarem de lugar

                unordered == false
            }
        }
    }

    while (unordered == true) */