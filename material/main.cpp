#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    double a, b, c, delta, x, x1, x2;
    cout << "Informe o valor de a:  \n";
    cin>> a;
    cout << "Informe o valor de b:  \n";
    cin >> b;
    cout << "Informe o valor de c:  \n";
    cin >> c;

    delta = (b * b) - 4 * (a) * (c);

    if (delta < 0) {
        cout<< " A equação não possui raízes reais. \n";
    } else if (delta = 0) {
        x = -(b) /2*a;
        cout << " A equação possui apenas uma raiz real \n";
    } else {
        x1 = (-(b) + sqrt(delta)) / (2 * a);
        x2 = (-(b) - sqrt(delta)) / (2 * a);
        cout << "As raízes da equação são x1 = " << x1 << " e x2 = " << x2 << endl;
    }
    cout << "Valor de delta = " << delta << endl;

}
