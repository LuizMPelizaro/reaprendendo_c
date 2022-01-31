//
// Created by alpha on 31/01/2022.
//

#include "stdlib.h"
#include "stdio.h"
#include "time.h"

int valueGenerator(int MaxValue) {
    return rand() % MaxValue;
}
int value_par(int MaxValue){
    int value = valueGenerator(MaxValue);
    if (value % 2 == 0){
        return value;
    }
    else {
        value_par(MaxValue);
    }
}

int main(void) {
    srand((time(NULL)));
    int vetor[6], i, valor;
    size_t vetor_contrario = sizeof(vetor) / sizeof(vetor[0]);
    for (i = 0; i < 6; i++) {
        valor = value_par(100);
        if (valor % 2 == 0) {
            vetor[i] = valor;
        }
        printf("%d ", vetor[i]);
    }
    printf("\n");
    for (i = vetor_contrario - 1; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
}