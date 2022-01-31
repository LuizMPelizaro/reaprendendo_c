//
// Created by alpha on 31/01/2022.
//

#include "stdio.h"

int main(void) {
    int vetor[6];
    printf("Insira 6 valores inteiros:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &vetor[i]);
    }
    printf("Valores armazenados\n");
    for (int i = 0; i<6; i++){
        printf("%d ",vetor[i]);
    }
}