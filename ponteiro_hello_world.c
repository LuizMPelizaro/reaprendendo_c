//
// Created by alpha on 27/01/2022.
//

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {
    char hello[] = "Hello World";
    printf("from main: %d\n", &hello);

    /*
     * A função malloc significa memory alocation
     * sizeof mede o tamanho de algo , no caso da variavel hello
     * malloc aloca um determina espaço de mememoria do tamnho do array hello, que é medido com a função sizeof
     * *hello2 é um ponteiro pois aponta , aonde vai estar o endereço na heap
     * strcpy pega a varivel hello antiga e copia ela para o novo espaço na heap, essa sera a unica duplicata que teremos
     * ENTENDER QUE NA VARIAVEL hello2 NÃO TEREMOS A STRING "Hello World" E SIM O ENDEREÇO PRO PRIMEIRO BYTE NA HEAP ,
     * ONDE ENCONTRAREMOS ESSA COPIA DO "Hello Wolrd"
     */
    char *hello2 = malloc(sizeof(hello));
    strcpy(hello2, hello);
    printf("hello2: %x\n", hello2);
    /*
     * Aqui no *hello3 ocorre a mesma coisa que foi explicada na linha 18,19 só que apontaremos pro inicio + 6 posçoes
     * que fara com que imprima somente o World.
     */
    char *hello3 = hello2 + 6;
    printf("from hello2 %s\n", hello2);
    printf("from hello3 %s\n", hello3);
    return 0;
}