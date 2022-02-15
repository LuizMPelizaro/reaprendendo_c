//
// Created by alpha on 15/02/2022.
//

#include "stdio.h"

void check_better(int *value_a, int *value_b);

int main(void) {
    int value_a = 10, value_b = 15, *pointer_a, *pointer_b;
    pointer_a = &value_a;
    pointer_b = &value_b;
    check_better(pointer_a, pointer_b);
    printf("Maior valor %d\nMenor valor %d", value_a, value_b);
}

void check_better(int *value_a, int *value_b) {
    int aux;
    if (*value_b > *value_a) {
        aux = *value_a;
        *value_a = *value_b;
        *value_b = aux;
    }
}