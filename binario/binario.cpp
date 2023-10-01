#include <iostream>
#include <vector>

using namespace std;

int main() {
    int num = 0;
    int resto = 0;

    // Usar um vetor dinâmico para armazenar os restos
    vector<int> vresto;

    cout << "Informe o valor que deseja converter em binario: " << endl;
    cin >> num;

    // Enquanto o número for maior que 0, continue a dividir e armazenar o resto
    while (num > 0) {
        resto = num % 2;
        vresto.push_back(resto);
        num = num / 2;
    }

    // O número em binário é a sequência de restos em ordem inversa
    cout << "O numero em binario e: ";
    for (int i = vresto.size() - 1; i >= 0; i--) {
        cout << vresto[i];
    }
    cout << endl;

    return 0;
}
