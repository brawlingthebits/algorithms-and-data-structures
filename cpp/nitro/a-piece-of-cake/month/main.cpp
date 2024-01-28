#include <iostream>
using namespace std;

int main() {

  char months[12][10] = { "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro" };
  
  int userInput;
  cin >> userInput; 

  cout << months[userInput-1] << endl;
  
  return 0;
}