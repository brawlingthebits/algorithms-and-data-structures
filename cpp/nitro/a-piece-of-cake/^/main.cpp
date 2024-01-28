#include <iostream>
using namespace std;

int main() {

  int n, total=1;

  cin >> n;

  for (int i=0; i < n; i++) {
    total *= 2;
  }
  
  cout << total << endl; 

  return 0;
}