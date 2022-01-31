//
// Created by alpha on 31/01/2022.
//

#include "stdlib.h"
#include "stdio.h"
#include "time.h"


int valueGenerator(int MaxValue) {
    return rand() % MaxValue;
}

void minMaxPositions(int lenght, int array[]) {
    int i, max, min;
    max = array[0];
    min = array[0];
    for (i = 0; i < lenght; i++) {
        if (array[i] < min) {
            min = array[i];
        }
        if (array[i] > max) {
            max = array[i];
        }
    }
    printf("Maior: %d\n"
           "Menor: %d", max, min);
}

int main(void) {
    srand((time(NULL)));
    int vetor[10], i, max_position, min_position;
    for (i = 0; i < 10; i++) {
        vetor[i] = valueGenerator(100);
        printf("%d ", vetor[i]);
    }
    printf("\n");
    minMaxPositions(10, vetor);
}

