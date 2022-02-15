//
// Created by alpha on 15/02/2022.
//

#include "stdio.h"

int main(void) {
    int array[5], *pointer;
    pointer = &array;
    printf("Escreva 5 valores inteiro para um array\n");
    for (int i = 0; i < 5; ++i) {
        scanf("%d", pointer);
        pointer++;
    }
    pointer = &array;
    for (int i = 0; i < 5; ++i) {
        printf("Array posicao %d , dobro do valor : %d\n", i, *pointer * 2);
        pointer++;
    }
}