#include <stdio.h>

int main() {
    float numero; 
    float soma = 0; 
    float media; 

    // Solicita ao usuário que digite 10 números
    printf("Digite 10 números:\n");
    for (int i = 1; i <= 10; i++) {
        printf("Número %d: ", i);
        scanf("%f", &numero); // Lê cada número
        soma += numero; // Adiciona o número à soma
    }

    // Calcula a média
    media = soma / 10;

    // Exibe o resultado da média
    printf("A média dos 10 números é: %.2f\n", media);

    return 0; // Indica que o programa terminou com sucesso
}