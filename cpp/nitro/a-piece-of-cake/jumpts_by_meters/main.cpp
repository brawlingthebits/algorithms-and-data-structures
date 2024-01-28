#include <iostream>
#include <cmath>
using namespace std;

int main() {

  int distance, jump_distance;
  cin >> distance >> jump_distance;
  int jumps = ceil((double)distance/(double)jump_distance);  
  cout << jumps << endl;
  
  return 0;
}