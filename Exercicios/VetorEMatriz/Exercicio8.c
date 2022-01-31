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
    int vetor[6], i;
    size_t sizeVetor = sizeof(vetor)/sizeof(vetor[0]);
    for (i = 0; i < 6; i++) {
        vetor[i] = valueGenerator(100);
        printf("%d ",vetor[i]);
    }
    printf("\n");
    for (i = sizeVetor -1; i >=0;i--){
        printf("%d ",vetor[i]);
    }
}