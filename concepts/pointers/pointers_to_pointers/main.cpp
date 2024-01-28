#include <iostream>
using namespace std;

int main() {

    int idade = 23;
    int idadeDeMeuPai = 44;
    int *ponteiro = &idade;
    int **ponteiroParaPonteiro = &ponteiro;

    cout << &idade << endl << *ponteiro << endl << **ponteiroParaPonteiro;
    // Ao colocar o *, ele vai no ponteiro e pega o que está armazenado.

    **ponteiroParaPonteiro = 30;

    cout << endl << idade << endl;

    *ponteiroParaPonteiro = &idadeDeMeuPai;

    cout << "valor de ponteiro: " << *ponteiro;

    return 0;
}