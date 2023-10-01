#include <iostream>

using namespace std;

int main(){
    int numvidas = 0;
    int score = 0;

    cout << "Digite o numero de vidas: \n";
    cin >> numvidas;

    cout << "Digite o score: \n";
    cin >> score;

    cout << "O numero de vidas que vc ainda tem é: " << numvidas << " e o score é " << score << endl;

    cout << "Pressione Enter para continuar...";
    cin.get(); // Consumir o '\n' remanescente após o último cin
    cin.get(); // Esperar pelo Enter do usuário

    return 0;
}
