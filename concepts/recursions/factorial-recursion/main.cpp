#include<iostream>
using namespace std;

unsigned long long factorial(unsigned int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int main() {
    unsigned int num;
    cout << "Enter a positive integer: ";
    cin >> num; 
    cout << "Factorial of " << num << " = " << factorial(num);
    return 0; 
}