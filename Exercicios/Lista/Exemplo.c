//
// Created by alpha on 21/02/2022.
//

//Codigo de uma fila de banco
#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

/*
 * Strutura da lista
 * data contem o valor da variavel
 * next aponta para o proximo valor na lista
 */
struct Node {
    int data;
    struct Node *next;
};

//Mostra todas os valores na lista contidos na lista
void showList(struct Node *n) {
    while (n != NULL) {
        printf("%d ", n->data);
        n = n->next;
    }
}

/*
 * Cria um valor na cabeça da list a
 * head_ref é uma referência a cabeça da lista
 * value é o valor que contera aquele ponto da lista
 */
void push(struct Node **head_ref, int value) {
    struct Node *new_node = (struct Node *) malloc(sizeof(struct Node));

    new_node->data = value;

    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}

/*
 * insertAfter insere apos um valor da lista
 * prev_node é o ponteiro que aponsta para o Nó anterior ao que sera inserido
 * new_data : valor que sera inserido
 */
void insertAfter(struct Node *prev_node, int new_data) {
    if (prev_node == NULL) {
        printf("the given previus node cannot be NULL");
        return;
    }

    struct Node *new_node = (struct Node *) malloc(sizeof(struct Node));

    new_node->data = new_data;

    new_node->next = prev_node->next;

    prev_node->next = new_node;
}

/*
 * Deleta um Nó da lista
 * head_ref aponta para a cabeça da lista
 * key é o valor que esta sendo procurado para ser destruido
 */
void deleteNode(struct Node **head_ref, int key) {
    struct Node *temp = *head_ref, *prev;

    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
        return;

    prev->next = temp->next;
    free(temp);
}

/*
 * A função append adiciona no final da lista
 * head_ref o ponteiro que aponta para a cabeça
 * new_data o valor a ser alocado
 */
void append(struct Node **head_ref, int new_data) {
    struct Node *new_node = (struct Node *) malloc(sizeof(struct Node));

    struct Node *last_node = *head_ref;

    new_node->data = new_data;

    new_node->next = NULL;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    while (last_node->next != NULL) {
        last_node = last_node->next;
    }
    last_node->next = new_node;
}

void insertPosition(struct Node *head_node, int position_node, int value) {
    int i = 0;
    struct Node *prev;
    struct Node *current_position;
    struct Node *new_position;

    new_position = malloc(sizeof(struct Node));
    new_position->data = value;
    // find the correct place to insert
    // procura a posição correta para inserir
    prev = NULL;
    for (current_position = head_node; current_position != NULL; current_position = current_position->next, i += 1) {
        if (i >= position_node)
            break;
        prev = current_position;
    }
    // link up the element that will follow the new node
    // vincua o elemento que seguira o novo Node
    new_position->next = current_position;
    // insert into middle or end of list
    // insere no meio ou no final da lista
    if (prev != NULL)
        prev->next = new_position;
        // insert into empty list or _before_ the first node
        // insere na lista vazia ou antes do primeiro Node
    else
        head_node = new_position;
}

int main(void) {
    struct Node *head = NULL;

    append(&head, 4);

    append(&head, 6);

    append(&head, 3);

    push(&head, 8);

    push(&head, 7);

    push(&head, 2);

    insertAfter(head->next, 1);

    deleteNode(&head, 2);
    showList(head);
}