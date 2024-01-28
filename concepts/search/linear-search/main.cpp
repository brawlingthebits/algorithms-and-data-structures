#include <iostream>

using namespace std;

int indexOf(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;
        } else {
            return -1;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value = 60;

    int index = indexOf(arr, size, value);
    if (index > -1) {
        cout << "O índice no número " << value << " é " << index;
    } else {
        cout << "O número " << value << " não existe no array.";
    }
} 