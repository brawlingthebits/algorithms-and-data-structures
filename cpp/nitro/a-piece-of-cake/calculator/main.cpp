#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  
  int a, b;
  char op;

  cin >> op >> a >> b;

  double total;

  if (op == '+') {
    total = a + b;
  };
  if (op == '-') {
    total = a - b;
  };
  if (op == '*') {
    total = a * b;
  };
  if (op == '/') {
    float total;
    total = (float)a / (float)b;
    cout << fixed << setprecision(1) << total << endl;
  } else {
    cout << total << endl;
  };

  return 0;
}