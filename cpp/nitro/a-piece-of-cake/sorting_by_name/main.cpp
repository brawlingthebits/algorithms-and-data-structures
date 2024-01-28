#include <iostream>
using namespace std;

int main() {

  string name;
  cin >> name;

  if (name.length() <= 4) {
    cout << "GRUPO A" << endl;
  } else if (name.length() <= 10) {
    cout << "GRUPO B" << endl;
  } else {
    cout << "GRUPO C" << endl;
  }

/*   if (name.size() < 5) {
    cout << "GRUPO A" << endl;
  } 

  if (name.size() > 4 and name.size() < 11) {
    cout << "GRUPO B" << endl;
  } 

  if (name.size() > 10) {
    cout << "GRUPO C" << endl;
  } */

  return 0;
}