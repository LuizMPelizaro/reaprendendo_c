//
// Created by alpha on 14/02/2022.
//

#include "stdio.h"

int main(void) {
    int valor_b, valor_a;
    int *pointer_b, *pointer_a;
    printf("Digite um valor para A e um para B:\n");
    scanf("%d", &valor_a);
    scanf("%d", &valor_b);
    pointer_a = &valor_a;
    pointer_b = &valor_b;
    if (&*pointer_a > &*pointer_b) {
        printf("O ponteiro com o maior valor aponta para %d", *pointer_a);
    } else {
        printf("O ponteiro com o maior valor aponta para %d", *pointer_b);
    }
}