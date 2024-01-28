#include <iostream>
using namespace std;

int main() {

  int idade = 13;
  int *ponteiro;

  ponteiro = &idade;

  cout << "Endereço de memória da Idade " << &idade << endl;
  cout << "Idade: " << idade << endl;
  cout << "Endereço onde o ponteiro aponta: " << ponteiro << endl;
  cout << "Ponteiro: " << *ponteiro << endl;

  return 0;
}