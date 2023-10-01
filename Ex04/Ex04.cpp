#include <iostream>

//Dado o vetor: Vet [7] = {3,6,1,2,8,10,4}; faça o passo a passo da ordenação utilizando o Quicksort.

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

/*
Essa função é uma implementação simples para trocar os valores de duas
variáveis. Usamos referências (&) para modificar diretamente os valores
das variáveis originais.
*/

int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Escolhendo o último elemento como pivô
    int i = (low - 1);  // Índice do menor elemento

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}
/*Esta é a parte fundamental do Quicksort. A função reorganiza o vetor de
forma que:

Todos os elementos menores que o pivô venham antes dele.
Todos os elementos maiores que o pivô venham depois dele.
A função retorna a posição final do pivô.

*/

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quicksort(arr, low, pi - 1);  // Ordenar sub-vetor à esquerda do pivô
        quicksort(arr, pi + 1, high); // Ordenar sub-vetor à direita do pivô
    }
}

/*Esta é a função de ordenação principal. Ela toma um vetor e suas
posições iniciais e finais e o ordena. A ideia principal aqui é:

Particionar o vetor (colocar o pivô na posição correta).
Chamar o quicksort para os elementos à esquerda do pivô.
Chamar o quicksort para os elementos à direita do pivô.

*/


int main() {
    int Vet[7] = {3,6,1,2,8,10,4};

    int n = sizeof(Vet) / sizeof(Vet[0]);
    quicksort(Vet, 0, n - 1);

    // Imprimir vetor ordenado
    for (int i = 0; i < n; i++) {
        cout << Vet[i] << " ";
    }

    return 0;
}
/*Esta é a função principal. Ela:

Define um vetor chamado Vet.
Calcula o tamanho desse vetor (n).
Chama a função quicksort para ordenar o vetor.
Imprime o vetor ordenado.
*/

