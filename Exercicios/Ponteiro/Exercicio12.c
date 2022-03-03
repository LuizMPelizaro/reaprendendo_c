//
// Created by alpha on 16/02/2022.
//

#include "stdio.h"

int order_by_high(int *value_a, int *value_b, int *value_c);

int main(void) {
    int value_a = 11, value_b = 1, value_c = 10, *pointer_a, *pointer_b, *pointer_c;
    pointer_a = &value_a;
    pointer_b = &value_b;
    pointer_c = &value_c;
    order_by_high(pointer_a, pointer_b, pointer_c);
    printf("Maior valor :%d\nValor intermediario :%d\nMenor valor :%d", value_a, value_b, value_c);
}

int order_by_high(int *value_a, int *value_b, int *value_c) {
    int aux = 0;
    if (*value_a == *value_b && *value_a ==*value_c && *value_b == *value_c) {
        return 1;
    } else {
        if (*value_a > *value_b) {
            if (*value_b > *value_c) {
                return 0;
            } else {
                if (*value_a > *value_c) {
                    aux = *value_b;
                    *value_b = *value_c;
                    *value_c = aux;
                    return 0;
                } else {
                    aux = *value_a;
                    *value_a = *value_c;
                    *value_c = *value_b;
                    *value_b = aux;
                    return 0;
                }
            }
        } else {
            if (*value_b > *value_a) {
                if (*value_a > *value_c) {
                    aux = *value_a;
                    *value_a = *value_b;
                    *value_b = aux;
                    return 0;
                } else {
                    aux = *value_a;
                    *value_a = *value_b;
                    *value_b = *value_c;
                    *value_c = aux;
                    return 0;
                }
            } else {
                aux = *value_a;
                *value_a = *value_c;
                *value_c = aux;
                return 0;
            }
        }
    }
}