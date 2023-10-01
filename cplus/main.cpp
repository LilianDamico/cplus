#include <iostream>

using namespace std;

int main()
{
    int n1, n2, n3, n4, n5, mediaP;
    cout << "Informe o primeiro valor \n";
    cin >> n1;
    cout << "Informe o segundo valor \n";
    cin >> n2;
    cout << "Informe o terceiro valor \n";
    cin >> n3;
    cout << "Informe o quarto valor \n";
    cin >> n4;
    cout << "Informe o quinto valor \n";
    cin >> n5;
    mediaP = (n1 * 1) + (n2 * 2) + (n3 * 3) + (n4 * 4) + (n5 * 5) / (1 + 2 + 3 + 4 + 5);

    cout << " A média ponderada é " << mediaP;


    return 0;
}
