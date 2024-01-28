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

void selectionSort(int numbers[], int n) {
    for(int i = 0; i < n-1; i++) {
        int min = i;
        for (int j = i+1; j < n; j++) {
            if (numbers[j] < numbers[min]) {
                min = j;
            }
        }
        if (i != min) {
            // swap
            // int aux = numbers[i];
            // numbers[i] = numbers[min];
            // numbers[min] = aux;
            swap(numbers[i], numbers[min]);
        }
    }
}

int main() {
    int vector[] = {8, 3, 6, 9, 14, 2, 5};

    // bubbleSort(vector, 7);
    selectionSort(vector, 7);

    for (int i = 0; i < 7; i++) {
        cout << vector[i] << " ";
    }
    cout << endl;
}