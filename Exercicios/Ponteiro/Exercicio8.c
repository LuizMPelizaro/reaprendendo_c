//
// Created by alpha on 15/02/2022.
//

#include "stdio.h"

int main(void){
    float array[10] = {1.2,2.1,3.2,4.3,5.4,6.5,7.6,8.7,9.8,10.9};
    for (int i = 0; i < 10; ++i) {
    printf("Posicao %i , endereco : %x\n",i+1 ,&array[i]);
    }
}