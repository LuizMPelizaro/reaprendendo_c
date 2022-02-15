//
// Created by alpha on 15/02/2022.
//

#include "stdio.h"

int sun(int *value_a, int *value_b);

int main(void) {
    int value_a = 10, value_b = 50, *pointer_a, *pointer_b, sun_value = 0;
    pointer_a = &value_a;
    pointer_b = &value_b;
    sun_value = sun(pointer_a, pointer_b);
    printf("O valor de A %d\nO valor de B %d\nValor da soma %d", value_a, value_b, sun_value);
}

int sun(int *value_a, int *value_b) {
    int sun_value = 0;
    *value_a = *value_a * 2;
    *value_b = *value_b * 2;
    sun_value = *value_a + *value_b;
    return sun_value;
}