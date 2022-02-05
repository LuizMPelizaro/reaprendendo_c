//
// Created by alpha on 27/01/2022.
//

#include "stdio.h"
#include "string.h"
#include "inttypes.h"

struct Person{
    char name[10];
    uint8_t age;
    uint8_t height;
};

int main(){
    struct Person person;
    strcpy(person.name, "Luiz");
    person.age = 20;
    person.height =172;

    printf("%x\n", &person);
    return 0;
}