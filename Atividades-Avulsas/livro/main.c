#include <stdio.h>
#include <stdlib.h>

typedef struct Livro {
  char titulo[30];
  int year;
  int paginas;
  float valor;
}L;

int main() {

    L livros[5];
    int i;
    int media;

    for (i = 0; i < 5; i++) {
        printf("Informe o nome do titulo do livro: \n");
        scanf("%s",livros[i].titulo);
        printf("Informe o ano de lançamento do Livro: \n");
        scanf("%d",&livros[i].year);
        printf("Informe a quantidade de paginas do livro: \n");
        scanf("%d",&livros[i].paginas);
        printf("Informe o valor do livro: \n");
        scanf("%f",&livros[i].valor);
    }


    for (i=0;i<5;i++) {
        media +=livros[i].paginas;
    }
    media = media/5;
    printf("Media de paginas = %d\n",media);


    return 0;
}