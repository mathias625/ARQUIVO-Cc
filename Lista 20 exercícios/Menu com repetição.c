#include <stdio.h>

int main() {
    int opcao; // Variável para armazenar a opção escolhida
    int num1, num2; 

    do {
        // Exibe o menu de opções
        printf("Menu,calculadora do mathias:\n");
        printf("1. Somar\n");
        printf("2. Subtrair\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao); 

        // Verifica qual opção foi escolhida
        switch (opcao) {
            case 1: // Opção de somar
                printf("Digite dois números: ");
                scanf("%d %d", &num1, &num2); // 
                printf("Resultado da soma: %d\n", num1 + num2); // Exibe o resultado da soma
                break;

            case 2: // Opção de subtrair
                printf("Digite dois números: ");
                scanf("%d %d", &num1, &num2); // Lê os números
                printf("Resultado da subtração: %d\n", num1 - num2); // Exibe o resultado da subtração
                break;

            case 3: // Opção de sair
                printf("Saindo do programa...\n"); // Mensagem de saída
                break;

            default: // Caso a opção não seja válida
                printf("Opção inválida! Tente novamente.\n"); // Mensagem de erro
        }
    } while (opcao != 3); // Repete o menu até que vocÊ defina sair

    return 0; // Indica que o programa terminou com sucesso
}