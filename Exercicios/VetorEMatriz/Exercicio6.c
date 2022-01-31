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
    int vetor[10], i;
    int Min_value, Max_value;
    for (i = 0; i < 10; i++) {
        vetor[i] = valueGenerator(100);
        printf("%d ", vetor[i]);

    }
    Min_value = vetor[0], Max_value = vetor[0];
    for (i = 0; i < 10; i++) {
        if (vetor[i] < -Min_value) {
            Min_value = vetor[i];
        }
        if (vetor[i] > Max_value) {
            Max_value = vetor[i];
        }
    }

    printf("\nO menor valor do vetor e:%d\nO maior valor do vetor e:%d", Min_value, Max_value);
}