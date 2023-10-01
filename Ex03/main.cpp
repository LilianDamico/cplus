#include <iostream>

/*Crie um método do tipo booleano para verificar se um número é positivo e par, crie outro método
 que entre com números enquanto forem positivos  e pares (para isso chame o método já criado) e
 ao final retorne quantos números foram digitados.
 Os métodos devem sempre vir antes do main, pois o contrário gera erro de compilação
*/

using namespace std;
/*Esta linha permite que você use funções e classes da biblioteca padrão
sem precisar prefixá-las com std::. Por exemplo, você pode escrever cout
em vez de std::cout.
*/


bool verificar(int x);
int programa();
/*Aqui, você declarou dois protótipos de função. Estes indicam que, em algum
lugar no código, você terá uma função chamada verificar que aceita um int e
retorna um bool e uma função chamada programa que não aceita argumentos e
retorna um int.
*/

int main(int argc, char *argv[]){
    int x;

    cout<<"Rodou : "<<programa()<<" vez\n";
    system("PAUSE");
    return EXIT_SUCCESS;
}

/*A função main é o ponto de entrada do programa. O programa começa por
imprimir "Rodou : ", seguido pelo retorno da função programa(),
e então " vez\n". Após imprimir essa mensagem, ele pausa a execução até
que o usuário pressione uma tecla (usando o system("PAUSE")).
Finalmente, retorna EXIT_SUCCESS, que é uma constante que representa
uma terminação bem-sucedida do programa.
*/

bool verificar(int x){
    if((x > 0)&&(x % 2 == 0)){
          return true;
    }
          return false;
}

/*Esta função verifica se um número é positivo e par. Se ambos os critérios
forem atendidos, ela retorna true; caso contrário, retorna false.
*/



int programa(){
    int x, cont=0;
    do{
        cout<<"digite o numero: ";cin>>x;
        cont++;
    }while(verificar(x));

    return cont-1;
}



/*Esta função pede ao usuário que digite números continuamente até que ele
insira um número que não seja positivo e par. Cada vez que um número é
inserido, o contador cont é incrementado. Quando o loop termina, a função
retorna cont-1, que representa o número de tentativas feitas pelo usuário
antes de inserir um número que não seja positivo e par.

Em resumo, o programa solicita ao usuário que insira números repetidamente
até que ele forneça um número que não seja positivo e par.
No final, ele mostra quantas tentativas o usuário fez antes de fornecer
tal número.

*/
