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
    int vetor[15], i;
    float media = 0;
    size_t sizeVetor = sizeof(vetor) / sizeof(vetor[0]);
    for (i = 0; i < 15; i++) {
        vetor[i] = valueGenerator(11);
        media += vetor[i];
        printf("%d ", vetor[i]);
    }
    media = media / sizeVetor;
    printf("\nA nota media da sala: %.2f", media);
}