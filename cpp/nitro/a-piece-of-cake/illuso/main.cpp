#include <iostream>
using namespace std;

int main() {

  int number;

  while (cin >> number && number != 0) {
    cout << number*-1 << endl;
  }

  /* while (number != 0) {
    cin >> number;
    if (number != 0) {
      cout << number*-1 << endl;
    }
  } */
  
  return 0;
}