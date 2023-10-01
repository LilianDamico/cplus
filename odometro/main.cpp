#include <iostream>

using namespace std;

int main()
{
    double capacidade, litros, km;

    cout << "Informe a quantidade de combustível: \n";
    cin >> litros;
    cout << "Informe quantos quilometros rodou: \n";
    cin >> km;
    capacidade = km / litros;
    cout << "A capacidade do motor foi estimada em " << capacidade << " km por litro de combustível." << endl;


}
