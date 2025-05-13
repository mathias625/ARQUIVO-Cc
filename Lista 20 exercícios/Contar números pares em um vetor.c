#include <stdio.h>

int main() {
    int vetor[10], i, pares = 0; // Declaração do vetor e da variável para contar números pares

    for (i = 0; i < 10; i++) { // Loop para ler 10 valores
        printf("Digite um número: ");
        scanf("%d", &vetor[i]); // Lê e armazena o número no vetor
        if (vetor[i] % 2 == 0) { // Verifica se o número é par
            pares++; // Incrementa o contador de números pares
        }
    }

    printf("Quantidade de números pares: %d\n", pares); // Exibe a quantidade de pares
    return 0;
}