//
// Created by alpha on 28/01/2022.
//
#include "stdio.h"
#include "stdlib.h"


/*
 * Cria uma struct node "nó" em portugues.
 * Que tem um valor inteiro.
 * E o previous que aponta para o nó criado antes desse.
 */
struct Node {
    int value;
    struct Node *previous;
};

/*
 * createNode recebe um valor inteiro qualquer e o previous (nó anterior) para apontar para tal.
 * Utilizaremos malloc para alocar essa nova struct.
 * E preenchemos o campo value.
 * Caso o campo não seja o primeiro que ira apontar para NULL, pois não existe um nó antes dele,
 * daremos o valor anterior para que o nó aponte.
 */

struct Node *createNode(int value, struct Node *previous) {
    struct Node *node = (struct Node *) malloc(sizeof(struct Node));
    node->value = value;
    node->previous = previous;

    return node;
}

/*
 * Uma função que imprime os nós.
 * Caso o node nao seja NULL o laço ira rodar.
 */
void printNode(struct Node *node) {
    while (node != NULL) {
        printf("%d\n", node->value);
        node = node->previous;
    }
}

int main() {
    struct Node *first = createNode(2020, NULL);
    struct Node *second = createNode(2021, first);
    struct Node *third = createNode(2022, second);
    struct Node *fourth = createNode(2023, third);
    struct Node *fifth = createNode(2024, fourth);
    /*
     * O ponteiro iterator irá apontar para o último nó da lista, assim quando ele é chamado pela função printNode,
     * ela ira começar a imprimir do último para o primeiro (da de esqueda para a direita). E quando chega no *first,
     * afunção imprime e para de rodar o ‘loop’.
     */
    struct Node *iterator = fifth;

    printNode(iterator);
    return 0;
}