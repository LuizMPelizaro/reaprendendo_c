//
// Created by alpha on 01/02/2022.
//

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(void) {
    int valor_int = 50;
    int *ponteiro_inteiro = &valor_int;
    char letras[] = "Josnei";
    char *ponteiro_char = malloc(sizeof(letras));
    double valor_real = 0.2 ,*float_pointer;
    float_pointer = &valor_real;
    strcpy(ponteiro_char, letras);
    printf("Valor %d, valor ponteiro %d\nValor de memoria da variavel %x ,valor da variavel apontada %x\n", valor_int,
           *ponteiro_inteiro, &valor_int, &*ponteiro_inteiro);
    printf("Valor %s, valor ponteiro %s\nValor de memoria da variavel %x ,valor da variavel apontada %x\n", letras,
           ponteiro_char, &letras, &*ponteiro_char);
    printf("Valor %0.2f, valor ponteiro %0.2f\nValor de memoria da variavel %x ,valor da variavel apontada %x\n", valor_real,
          *float_pointer, &valor_real, &*float_pointer);
}
