#include <stdio.h>

int main() {
    int num; 
    int fatorial = 1; // Inicializa a variável fatorial com 1

    // Solicita ao usuário que digite um número
    printf("Digite um número: ");
    scanf("%d", &num); // Lê o número digitado pelo usuário

    // Verifica se o número é negativo
    if (num < 0) {
        printf("Fatorial não é definido para números negativos.\n"); // Mensagem de erro para números negativos
    } else {
        // Calcula o fatorial
        for (int i = 1; i <= num; i++) {
            fatorial *= i; // Multiplica o fatorial pelo número atual
        }
        // Exibe o resultado do fatorial
        printf("O fatorial de %d é: %d\n", num, fatorial);
    }

    return 0; // Indica que o programa terminou com sucesso
}