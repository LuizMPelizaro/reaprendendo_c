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
    return ((float) rand() / ((float) RAND_MAX + 1.0f)) * MaxVal;
}

int main() {

    float vetor[10], vetor_quadrado[10];
    int i;
    printf("Gerando os valores reais\n");
    for (i = 0; i < 10; i++) {
        vetor[i] = FloatRand(100);
        printf("%f ", vetor[i]);
    }
    printf("\nValores elevados ao quadrado\n");
    for (i = 0; i < 10; i++) {
        vetor_quadrado[i] = vetor[i] * vetor[i];
        printf("%.2f ", vetor_quadrado[i]);
    }
}