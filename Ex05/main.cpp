#include <iostream>
using namespace std;

/*Faça um método que verifique quantas vezes um número é divisível por outro
(dele até o 1).

*/

int countDivisions(int num, int divisor) {
    int count = 0;
    while (num % divisor == 0 && num > 1) {
        num /= divisor;
        count++;
    }
    return count;
}

int main() {
    int num, divisor;
    cout << "Digite o número: ";
    cin >> num;
    cout << "Digite o divisor: ";
    cin >> divisor;

    int result = countDivisions(num, divisor);
    cout << num << " é divisível por " << divisor << " " << result << " vezes consecutivas." << endl;

    return 0;
}
