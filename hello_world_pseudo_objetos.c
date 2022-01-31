//
// Created by alpha on 27/01/2022.
//
#include "stdio.h"
#include "stdlib.h"
#include "inttypes.h"
#include "string.h"
// Alterando o nome de struct para Class para simular um java
#define Class struct

Class Person {
    char name[10];
    uint8_t age;
    uint8_t height;

    //Aqui criamos a struct no heap e econimizamos espaço no stack.
    void (*show)(Class Person *);
};

void person_print(Class Person *self) {
    printf("Person :%s\n"
           "Age: %d\n"
           "Height: %d\n",
           self->name, self->age, self->height);
}
/*
 * Aqui "Instaciamos um objeto na memória", basicamente alocamos espaço na heap para a struct
  * No C quando criamos qualquer coisa no heap é nessesario colocar * na frente da variavel que guarda essa referencia para acessar o valor
 * A → significa que estamos apondanto o ponteiro para a variavel.
 * self->show = &person_print, dentro da newPerson vai apontar para a referência da função print_person.
 * A newPerson seria um construtor numa linguagem de OO, como Java, Python, etc.
 */
Class Person *newPerson(char name[],
                        uint8_t age,
                        uint8_t height) {
    Class Person *self = (Class Person *) malloc(sizeof(Class Person));
    strcpy(self->name, name);
    self->age = age;
    self->height = height;

    self->show = &person_print;
    return self;
}

int main() {
    Class Person *person2 = (Class Person *) newPerson("Luiz", 20, 70);
    person2->show(person2);
    return 0;
}

