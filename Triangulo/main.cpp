#include <iostream>

using namespace std;

int main()
{
    double a, b, c, area;

    cout<< "Informe o valor de a: \n";
    cin>> a;

    cout<< "Informe o valor de b: \n";
    cin>> b;

    cout<< "Informe o valor de c: \n";
    cin>> c;

    if (a + b > c && a + c > b && b + c > a){
        cout<<"As medidas fornecidas formam um triângulo! \n";
    } else {
        cout<<"As medidas fornecidas não formam um triângulo \n";
    }
}
