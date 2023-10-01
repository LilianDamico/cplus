#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

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

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quicksort(arr, low, pi - 1);  // Ordenar sub-vetor à esquerda do pivô
        quicksort(arr, pi + 1, high); // Ordenar sub-vetor à direita do pivô
    }
}

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
