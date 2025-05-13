#include <stdio.h>

int main() {
    float numero; 
    float maior; 
    float menor; 

    // Solicita ao usuário que digite 10 números
    printf("Digite 10 números:\n");

    // Lê o primeiro número para inicializar maior e menor
    printf("Número 1: ");
    scanf("%f", &numero);
    maior = numero; // Inicializa maior com o primeiro número
    menor = numero;  // Inicializa menor com o primeiro número

    // Lê os próximos 9 números
    for (int i = 2; i <= 10; i++) {
        printf("Número %d: ", i);
        scanf("%f", &numero); // Lê cada número

        // Verifica se o número é maior que o maior atual
        if (numero > maior) {
            maior = numero;
        }

        // Verifica se o número é menor que o menor atual
        if (numero < menor) {
            menor = numero;
        }
    }

    // Exibe os resultados
    printf("O maior número é: %.2f\n", maior);
    printf("O menor número é: %.2f\n", menor);

    return 0; // Indica que o programa terminou com sucesso
}