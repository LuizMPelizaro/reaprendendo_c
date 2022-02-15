//
// Created by alpha on 29/01/2022.
//

#include "stdio.h"
#include "stdlib.h"

struct Node {
    int value;
    struct Node *next;
};

struct Node *createNode(int value, struct Node *next) {
    struct Node *node = (struct Node *) (malloc(sizeof(struct Node)));
    node->value = value;
    node->next = next;

    return node;
}

void deleteNodeHead(struct Node *head) {
    struct Node *aux;
    if(head == NULL){
        printf("Lista Vazia");
    }
    else{
        aux = head->next;
        head->next = aux->next;
        free(aux);
    }
}

void print_node(struct Node *node) {
    while (node != NULL) {
        printf("%d\n", node->value);
        node = node->next;
    }
}

int main() {
    struct node *three = createNode(3, NULL);
    struct node *two = createNode(2, three);
    struct node *one = createNode(1, two);

    struct node *iterator = one;

    print_node(iterator);

    deleteNodeHead(one);
    print_node(iterator);
}