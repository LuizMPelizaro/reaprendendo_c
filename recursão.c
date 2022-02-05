//
// Created by alpha on 26/01/2022.
//
#include "stdio.h"

//void f1(char hello[]){
//    /*
//     * Exemplo de recursão que estoura a stack de memoria
//     */
//    printf("%d\n", &hello);
//    f1(hello);
//}
int fatorial(int numero) {
    /*
     * Função recursiva de fatorial
     */
    float valor_fatorial;
    if (numero <= 1) {
        return 1;
    } else {
        valor_fatorial = numero * fatorial(numero - 1);
        return valor_fatorial;
    }
}

int main() {
    /*
     *Todo o codigo que esta em comentario serve para criar uma recursão que estoura a stack , para mostras que ela tem fim.
     * O outro codigo é de uma função que imprime o fatorial de um numero x , no exemplo 5.
     */
//    char hello[] = "Hello World";
//    printf("from main : %d\n", &hello);
//    f1(hello);
    int valor = fatorial(5);
    printf("%d", valor);
    return 1;
}
