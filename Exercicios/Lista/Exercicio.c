#include "stdio.h"
#include "stdlib.h"

static int size = 0;
struct Node {
    int value;
    struct Node *next;
};

void showList(struct Node *n) {
    while (n != NULL) {
        printf("%d->", n->value);
        n = n->next;
    }
    printf("NULL");
}

void append(struct Node **head_node, int value) {
    struct Node *new_node = (struct Node *) malloc(sizeof(struct Node));

    struct Node *last_node = *head_node;
    new_node->value = value;

    new_node->next = NULL;

    if (last_node == NULL) {
        *head_node = new_node;
        size++;
        return;
    }
    while (last_node->next != NULL) {
        last_node = last_node->next;
    }
    last_node->next = new_node;
    size++;
}

void push(struct Node **head_node, int value) {
    struct Node *new_node = (struct Node *) malloc(sizeof(struct Node));

    new_node->value = value;
    new_node->next = (*head_node);

    *head_node = new_node;
    size++;
}

void insert_position(struct Node *head_ref,int value, int position){
    int i = 0;
    struct Node *prev;
    struct Node *current_position;
    struct Node *new_position;

    new_position = malloc(sizeof (struct Node));
    new_position->value = value;

    prev = NULL;

    for(current_position = head_ref; current_position != NULL; current_position = current_position->next,i ++){
        if(i>=position)
            break;
        prev = current_position;
    }

    new_position->next = current_position;

    if(prev!=NULL)
        prev->next = new_position;

    else
        head_ref = new_position;
    size++;
}

void delete_node(struct Node **head_ref, int value_delete) {
    struct Node *temp = *head_ref, *prev;

    if (temp != NULL && temp->value == value_delete) {
        *head_ref = temp->next;
        free(temp);
        size--;
        return;
    }
    while (temp != NULL && temp->value != value_delete) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        return;
    }
    prev->next = temp->next;
    free(temp);
    --size;
}

int main(void) {
    struct Node *head = NULL;

    append(&head, 0);
    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    push(&head, 4);
    insertPosition(head, 6, 5);

    delete_node(&head, 4);
    showList(head);

    printf("\nSize list : %d\n", size);
}