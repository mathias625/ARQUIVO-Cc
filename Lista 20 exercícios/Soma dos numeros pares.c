#include <stdio.h>
int main() {
    int soma = 0; // Inicializa a variável soma com 0

    
    for (int i = 1; i <= 100; i++) {
        soma += 2 * i; // Multiplica i por 2 para obter o número par e adiciona à soma
    }

    // Imprime a soma dos 100 primeiros números pares
    printf("A soma dos 100 primeiros números pares é: %d\n", soma);
    
    return 0;
    // Indica que o programa terminou com sucesso
    
}