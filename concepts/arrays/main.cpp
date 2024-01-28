#include <iostream>
using namespace std;

int main() {
  
  int length;
  cin >> length;

  int enrolls[length];
  
  for (int i = 0; i < length; i++) {
    cin >> enrolls[i];
  }

  for (int i=length-1; i >= 0; i--) {
    cout << enrolls[i] << " ";
  }
  cout << endl;

  return 0;
}