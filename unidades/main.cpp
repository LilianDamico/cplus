#include <iostream>

using namespace std;

int main()
{
    int num, u, d, c;

    cout<< "Informe um valor: \n";
    cin >> num;

    u = num % 10;
    /*Aqui, estamos usando o operador módulo % para obter o dígito das unidades.
    O operador módulo retorna o resto da divisão. Por exemplo, 123 % 10 é 3, que é o dígito das unidades.
    */
    d = (num / 10) % 10;
    /* Para obter o dígito das dezenas, primeiro dividimos o número por 10 (o que remove o dígito das unidades)
     e depois pegamos o módulo por 10. Por exemplo, (123 / 10) é 12. E 12 % 10 é 2, que é o dígito das dezenas.
    */
    c = (num / 100) % 10;
   '' /*
    Similarmente, para obter o dígito das centenas, dividimos o número por 100
    (o que remove os dígitos das unidades e das dezenas) e depois pegamos o módulo por 10.
    */

    cout << "O valor da centena é " << c << " da dezena é " << d << " e da unidade é " << u << endl;
}
