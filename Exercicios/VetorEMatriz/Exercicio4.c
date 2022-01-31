//
// Created by alpha on 31/01/2022.
//
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int geraValores(int MaxValue) {
    return rand() % MaxValue;
}

int main(void) {
    srand(time(NULL));
    int vetor[8], X, Y, i, soma;
    for (i = 0; i < 8; i++) {
        vetor[i] = geraValores(100);
    }
    for (i = 0; i < 8; i++) {
        printf("%d ",vetor[i]);
    }
    printf("\nEscolha duas posicoes no vetor de 0 a 7\n");
    scanf("%d %d", &X, &Y);
    if (X && Y > 7) {
        printf("\nValor invalido");
        exit(0);
    } else {
        soma = vetor[X] + vetor[Y];
        printf("Valor da soma : %d", soma);
    }
}
