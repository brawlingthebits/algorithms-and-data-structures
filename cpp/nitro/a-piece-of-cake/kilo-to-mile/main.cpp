#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double mile;
  double kilometer;

  cin >> mile;
  kilometer = mile / 0.62137;
  cout << fixed << setprecision(2) << kilometer << endl;

  return 0;
}