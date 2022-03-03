//
// Created by alpha on 15/02/2022.
//

#include "stdio.h"

int main(void) {
    int array[5];
    int *pointer = &array;

    printf("Escreva 5 numeros inteiros\n");
    for (int i = 0; i < 5; ++i) {
        scanf("%i", pointer);
        pointer++;
    }
    pointer = &array;
    for (int i = 0; i < 5; ++i) {
        if (*pointer % 2 == 0){
            printf("%x ",&*pointer);
        }
        pointer++;
    }
}