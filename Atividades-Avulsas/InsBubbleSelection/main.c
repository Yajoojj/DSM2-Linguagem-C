#include <stdio.h>
//Bubble
void BubbleSort(int* v, int n) {
    int i, fim, aux;
    for (fim = n-1; fim >0; -- fim) {
        for (i = 0;i < fim; ++i) {
            if (v[i] > v [i+1]) {
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
            }
        }
    }
}
//Inserction
void inserctionSort(int* v, int n) {
    int i = 0;
    int j = 1;
    int aux = 0;
    while (j < n) {
        aux = v[j];
        i = j - 1;
        while ((i >= 0) && (v[i] > aux)) {
            v[i+1] = v[i];
            i = i - 1;
        }
        v[i+1] = aux;
        j = j + 1;
    }
}
//Selection
void selectionSort(int* v, int n) {
    int i, j, min, aux;
    for (i = 0;i < (n-1); i++) {
        min = i;
        for (j =(i+1);j < n; j++) {
            if (v[j] < v[min]) {
                min = j;
            }
            if (v[i] != v[min]) {
                aux = v[i];
                v[i] = v[min];
                v[min] = aux;
            }
        }
    }
}
//imprimir
void printArray(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
        printf("\n");
    }
}

//Int Main
int main() {
    int escolha;
    int v[] = {24, 62, 86, 2, 32};
    int n = sizeof(v) / sizeof(v[0]);

printf("Escolha um dos algoritmos de ordenacao:\n");
printf("1 - Bubble Sort\n2 - Inserction Sort\n3 - Selection Sort\n");
    printf("Selecione uma opcao: ");
scanf("%d", &escolha);

switch (escolha) {
    case 1:
        BubbleSort(v, n);
    printf("Array ordenado com Bubble Sort: \n");
    break;
    case 2:
        inserctionSort(v, n);
    printf("Array ordenado com Insertion Sort: \n");
    break;
    case 3:
        selectionSort(v, n);
    printf("Array ordenado com Selection Sort: \n");
    break;
    default:
        printf("Opcao Invalida\n");
    return 1;
}

printArray(v, n);
return 0;
}