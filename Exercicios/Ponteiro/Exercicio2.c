//
// Created by alpha on 14/02/2022.
//

#include "stdio.h"

int main(void) {
    int valor_a = 10, valor_b = 20, *pointer_a = &valor_a, *pointer_b = &valor_b;
    if (&*pointer_a > &*pointer_b) {
        printf("O maior endereco e do ponteiro A : %x", &pointer_a);
    } else {
        printf("O maior endereco e do ponteiro B : %x", &pointer_b);
    }
}