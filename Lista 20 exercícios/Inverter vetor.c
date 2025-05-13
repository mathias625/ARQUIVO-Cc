#include <stdio.h>

int main() {
    int vetor[5], i;

    for (i = 0; i < 5; i++) { // Loop para ler os valores do vetor
        printf("Digite um número: ");
        scanf("%d", &vetor[i]);
    }

    printf("Vetor invertido: ");
    for (i = 4; i >= 0; i--) { // Loop para imprimir o vetor de trás para frente
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}