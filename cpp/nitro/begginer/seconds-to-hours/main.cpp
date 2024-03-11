#include <iostream>
using namespace std;

int main() {
  long long totalSeconds;
  int hours=0, minutes=0, seconds=0;

  cin >> totalSeconds;

  if (totalSeconds >= 3600) {
    hours = totalSeconds/3600;
    totalSeconds = totalSeconds - hours*3600;
  }
  if (totalSeconds >= 60) {
    minutes = totalSeconds/60;
    totalSeconds = totalSeconds - minutes*60;
  }
  seconds = totalSeconds;

  cout << hours << "h " << minutes << "m " << seconds << "s " << endl; 

  return 0;
}