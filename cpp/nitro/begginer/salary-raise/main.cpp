#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double salary, raise, percent, newSalary;
  cin >> salary;
  
  if (salary < 400.01) {
    percent = 0.15;
  }
  else if (salary < 800.01 ) {
    percent = 0.12;
  }
  else if (salary < 1200.01  ) {
    percent = 0.10;
  }
  else if (salary < 2000.01 ) {
    percent = 0.07;
  }
  else {
    percent = 0.04;
  }

  raise = salary * percent;
  newSalary = salary + raise;
  
  cout << "Novo salario: " << std::fixed << std::setprecision(2) << newSalary << endl;
  cout << "Reajuste ganho: " << std::fixed << std::setprecision(2) << raise << endl; 
  cout << "Em percentual: " << static_cast<int>(percent*100) << " %" << endl;  
  return 0;
}