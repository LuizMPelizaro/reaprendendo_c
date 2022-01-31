
//
// Created by alpha on 31/01/2022.
//

#include "stdlib.h"
#include "stdio.h"
#include "time.h"

int valueGenerator(int MaxValue) {
    return rand() % MaxValue;
}

int main(void) {
    srand((time(NULL)));
    int vetor[5], menor, maior, i;
    float media;
    size_t sizeVetor = sizeof (vetor)/sizeof (vetor[0]);
    for (i = 0; i < 5; i++) {
        vetor[i] = valueGenerator(100);
        media += vetor[i];
        printf("%d ", vetor[i]);
    }
    menor = vetor[0], maior = vetor[0];
    for (i = 0; i < 5; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    printf("\n");
    media = media / sizeVetor;
    printf("Maior %d\n"
           "Menor %d\n"
           "Media %.2f", maior, menor, media);
}