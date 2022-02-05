//
// Created by Luiz Marcelo Pelizaro on 26/01/2022.
//
#include "stdio.h"
/*
 * Nesse exemplo a ‘string’ não é duplicado na stack
 * Caso fosse um inteiro seria
 */
void f2(char hello[]) {
    /*
     * No codigo abaixo imprimimos o endereço da copia da variavel hello , que foi gravada em outro ponto de memoria
     * Logo após imprimimos o ponto de memoria e depois o valor do argumento hello.
     * */
    printf("from f2: %d\n", &hello);
    printf("%s", hello);
}

void f1(char hello[]) {
    /*
     * No codigo abaixo imprimimos o endereço da cópia da variavel hello , gravada em outro ponto de memória
     * Logo abaixo passamos o argumento hello para um função f2
     */
    printf("from f1 %d\n", &hello);
    f2(hello);
}

int main() {
    /*
    * Alocamos uma String/Array de char Hello world
    * Pegamos o endereço onde o hello foi gravado pela primeira vez!
    * Lembrando que sempre que usamos o & ele ira pegar a posição de memória onde a variavel esta alocada
    * Passamos a variavel para a função f1
    * O nome dessa duplicão é passagem de valor,
    * que duplica a nossa variavel cada vez que ela é passada como parametro de uma função.
    */
    char hello[] = "Hello World";
    printf("from main : %d\n", &hello);
    f1(hello);
    return 0;
}
