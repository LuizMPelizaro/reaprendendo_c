//
// Created by alpha on 31/01/2022.
//

#include "stdio.h"
#include "stdlib.h"
#include "time.h"
int randomValues(int MaxRange) {
    return rand() % MaxRange;
}

int main(void) {
    srand(time(NULL));
    int vetor[10], i;
    int valores_pares = 0;
    for (i = 0; i < 10; i++) {
        vetor[i] = randomValues(100);
        if (vetor[i] % 2 == 0) {
            valores_pares++;
        }
    }
    for(i = 0; i<10;i++){
        printf("%d ", vetor[i]);
    }
    printf("\nO numero de pares no vetor e de: %d",valores_pares);
}