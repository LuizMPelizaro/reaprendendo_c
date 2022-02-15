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
    int vetor[20], vetor_sem_repitidos[20];
    int i, j, size_vetor_repetido = 0;
    int tamanho_vetor = sizeof(vetor) / sizeof(int);
    for (i = 0; i < tamanho_vetor; i++) {
        vetor[i] = valueGenerator(20);
        vetor_sem_repitidos[i] = vetor[i];
        printf("%d ", vetor[i]);
    }
    for (i = 0; i < tamanho_vetor; i++) {
        for (j = 0; j < size_vetor_repetido; j++) {
            if (vetor[i] == vetor_sem_repitidos[j]) {
                break;
            }
        }
        if (j == size_vetor_repetido) {
            vetor_sem_repitidos[size_vetor_repetido] = vetor[i];
            size_vetor_repetido++;
        }
    }
    printf("\nVetor sem repeticao\n");
    for (i = 0; i < size_vetor_repetido; i++) {
        printf("%d ", vetor_sem_repitidos[i]);
    }
    exit(EXIT_SUCCESS);
}