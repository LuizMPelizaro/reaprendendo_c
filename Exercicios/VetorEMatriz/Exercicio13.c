//
// Created by alpha on 05/02/2022.
//

#include "stdlib.h"
#include "stdio.h"
#include "time.h"

int valueGenerator(int MaxValue) {
    return rand() % MaxValue;
}

int main(void) {
    srand(time(NULL));
    int vetor[5], i, posicao_maior = 0, posicao_menor = 0, valor_maior = -1, valor_menor = 101;
    for (i = 0; i < 5; i++) {
        vetor[i] = valueGenerator(100);
    }
    for (i = 0; i < 5; i++) {
        if (vetor[i] < valor_menor) {
            valor_menor = vetor[i];
            posicao_menor = i;
        }
        if (vetor[i] > valor_maior) {
            valor_maior = vetor[i];
            posicao_maior = i;
        }
        printf("%d ", vetor[i]);
    }
    printf("\nA maior valor %d , posicao %d\nO menor valor %d , posicao %d\n", valor_maior, posicao_maior, valor_menor,
           posicao_menor);
}