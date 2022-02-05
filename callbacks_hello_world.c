//
// Created by alpha on 27/01/2022.
//

#include "stdio.h"
#include "stdlib.h"
#include "inttypes.h"
#include "string.h"

struct Person {
    char name[10];
    uint8_t age;
    uint8_t height;
};

/*
 * O ponteiro *function_pointer não retorna nada e recebe uma struct person como argumento
 * A variavel *function_pointer sera referencia/endereço para alguma função que tenha as caracteristicas declarada
 * No caso seja void (Não retorne nada) . O * seria como se estivesse dando copy and paste no nome da função que sera chamada
 */
void cretePerson(char name[],
                 uint8_t age,
                 uint8_t height,
                 void(*function_pointer)(struct Person)) {
    struct Person person;
    strcpy(person.name, name);
    person.age = age;
    person.height = height;
    (*function_pointer)(person);
}

/*
 * Essa função é uma função void que recebe uma Person como argumento, e serve para printar o que foi criado como person
 * IMPORTANTE!!!!
 * Essa função pode ser chamada depois, pois, não a declaramos ela na função createPerson, caso tivesse sido chamada
 * na dentro da createPerson ela deveria ser declarada antes.
 */
void printPerson(struct Person person) {
    printf("Person: %s %d %d\n",
           person.name, person.age, person.height);
}

void printPersonV2(struct Person person) {
    printf("Person :%s\n"
           "Age: %d\n"
           "Height: %d\n",
           person.name, person.age, person.height);
}

int main() {
    /*
     * Aqui passamos a função createPerson normalmente, mas chamamos a função que queremos no caso a printPerson
     * O &printPerson esta pegando o endenreço onde a função ta declarada e passando como argumento para a função createPerson
     * é apenas um interger que faz um cast para a função.
     * (cast é a ação de declarar que tipo esse numero representa para compilador do C)
     */
    cretePerson("Duda", 17, 40, &printPerson);
    cretePerson("Luiz", 20, 70, &printPersonV2);
    return 0;
}