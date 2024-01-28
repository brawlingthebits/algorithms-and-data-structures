#include <iostream>
using namespace std;

int main() {

  int length, number, total=0;
  cin >> length;

  for (int i=0; i < length; i++) {
    cin >> number;
    total += number;
  }
  
  cout << total <<endl;

  return 0;
}