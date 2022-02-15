//
// Created by alpha on 15/02/2022.
//

#include "stdio.h"

void sum(int *value_a, int *value_b);

int main(void) {
    int value_a = 10, value_b = 5, *pointer_a = &value_a, *pointer_b = &value_b;
    sum(pointer_a, pointer_b);
    printf("Valor A %d\nValor B %d", value_a, value_b);
}

void sum(int *value_a, int *value_b){
    *value_a = *value_a + *value_b;
}
