//
// Created by alpha on 15/02/2022.
//

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

float random_number();

int main() {
    srand(time(NULL));
    float array[10];
    for (int i = 0; i < 10; ++i) {
        array[i] = random_number();
    }
    for (int i = 0; i < 10; ++i) {
        if (array[i] < 0) {
            array[i] = 0;
        }
    }
    for (int i = 0; i < 10; ++i) {
        printf("%f ", array[i]);
    }
}

float random_number() {
    return ((float) rand() / ((float) RAND_MAX + 1) * 2) - 1.0;
}