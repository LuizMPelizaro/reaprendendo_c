//
// Created by alpha on 31/01/2022.
//
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

/*
 * Função que retorna numeros floats aleatorios
 */
float FloatRand(float MaxVal) {
    return ((float) rand() / ((float) RAND_MAX + 1.0f)) * MaxVal -100;
}

int main(void) {
    srand((time(NULL)));
    int i, menor_zero = 0;
    float vetor[10], soma = 0;
    for (i = 0; i < 10; i++) {
        vetor[i] = FloatRand(200);
        if (vetor[i] > 0) {
            soma += vetor[i];
        } else {
            menor_zero++;
        }
        printf("%.2f ", vetor[i]);
    }
    printf("\nSoma :%.2f\n"
           "Numeros negativos: %d", soma, menor_zero);
}