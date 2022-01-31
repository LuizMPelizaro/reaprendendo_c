//
// Created by Luiz Marcelo Pelizaro on 31/01/2022.
//
#include "stdio.h"

int main() {
    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma = A[0] + A[1] + A[5];
    printf("O valor da soma: %d \n", soma);
    A[4] = 100;

    printf("Vetor:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d\n", A[i]);
    }

    return 1;
}