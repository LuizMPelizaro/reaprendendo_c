//
// Created by alpha on 01/02/2022.
//

#include <stdio.h>

int main(void) {
    int x;
    int *ptr;
    x = 5;
    ptr = &x;
    printf("O valor da variável X é: %d\n", *ptr);  // derreferenciando um ponteiro
    *ptr = 10;                      // usando derreferencia no "lado esquerdo" de uma atribuição
    printf("Agora, X vale: %d\n", *ptr);
}
