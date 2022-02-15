//
// Created by alpha on 14/02/2022.
//

#include "stdio.h"

void change_values(int *value_a, int *value_b);

int main(void) {
    int value_a = 10, value_b = 7, *pointer_a = &value_a, *pointer_b = &value_b;
    change_values(pointer_a,pointer_b);
    printf("Valor a %d\nValor b %d",value_a,value_b);
}

void change_values(int *value_a, int *value_b) {
    int aux;
    aux = *value_a;
    *value_a = *value_b;
    *value_b = aux;
}