//
// Created by alpha on 09/02/2022.
//

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(void) {
    double vetor[5] = {1.58, 47.5, 58, 4.4, 524.1};
    int tamanho = sizeof(vetor) / sizeof(double);
    int codigo;
    scanf("%i", &codigo);
    switch (codigo) {
        case 0:
            return EXIT_SUCCESS;
            break;
        case 1:
            for (int i = 0; i < tamanho ; ++i) {
                if (i < 5) printf("%0.2f ", vetor[i]);
                else printf("%d ", vetor[i]);
            }
            break;
        case 2:
            for (int i = tamanho - 1; i > -1; --i) {
                if (i < 5) printf("%0.2f ", vetor[i]);
                else printf("%d", vetor[i]);
            }
            break;
        default:
            printf("Codigo invalido");
            return EXIT_FAILURE;
    }
}