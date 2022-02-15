//
// Created by alpha on 05/02/2022.
//

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int valueGenerator(int MaxInt) {
    return rand() % MaxInt;
}

int main(void) {
    srand(time(NULL));
    int vetor[10], i, j, k, size_vetor_repetido = 0, flag_vetor_repitido, vetor_numeros_repitidos[10];
    for (i = 0; i < 10; i++) {
        vetor[i] = valueGenerator(10);
        printf("%d ", vetor[i]);
    }
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; ++j) {
            flag_vetor_repitido = 0;
            if (vetor[i] == vetor[j] && j != i) {
                for (k = 0; k < 10; k++) {
                    if (vetor_numeros_repitidos[k] == vetor[j]) flag_vetor_repitido = 1;
                }
                if (flag_vetor_repitido == 0) {
                    vetor_numeros_repitidos[size_vetor_repetido] = vetor[i];
                    size_vetor_repetido++;
                }
            }
        }
    }
    printf("\n");
    for (i = 0; i < size_vetor_repetido; i++) {
        printf("%d ", vetor_numeros_repitidos[i]);
    }
    exit(EXIT_SUCCESS);
}