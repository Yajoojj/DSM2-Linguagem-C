#include <stdio.h>

#define MAX_HABITANTES 500

typedef struct {
    int idade;
    char sexo;
    float salario;
    int num_filhos;
} H;

void coletarDados(H habitantes[]) {
    for (int i = 0; i < MAX_HABITANTES; i++) {
        printf("\nHabitante %d:\n", i + 1);
        printf("Idade: ");
        scanf("%d", &habitantes[i].idade);
        printf("Sexo (M/F): ");
        scanf(" %c", &habitantes[i].sexo);
        printf("Salário: ");
        scanf("%f", &habitantes[i].salario);
        printf("Número de filhos: ");
        scanf("%d", &habitantes[i].num_filhos);
    }
}


float calcularMediaSalarial(H habitantes[]) {
    float soma = 0;
    for (int i = 0; i < MAX_HABITANTES; i++) {
        soma += habitantes[i].salario;
    }
    return soma / MAX_HABITANTES;
}

int main() {
    H habitantes[MAX_HABITANTES];

    printf("Digite os dados de %d habitantes:\n", MAX_HABITANTES);
    coletarDados(habitantes);

    float media_salario = calcularMediaSalarial(habitantes);
    printf("\nMédia salarial: %.2f\n", media_salario);

    return 0;
}
