#include <stdio.h>

// Definição da struct Produto
struct Produto {
    char nome[50];
    float preco;
    int quantidade;
};

int main() {
    struct Produto produtos[5]; // Vetor de 5 produtos
    int i;

    for (i = 0; i < 5; i++) { // Loop para cadastrar os produtos
        printf("Nome do produto: ");
        scanf("%s", produtos[i].nome);
        printf("Preço: ");
        scanf("%f", &produtos[i].preco);
        printf("Quantidade: ");
        scanf("%d", &produtos[i].quantidade);
    }

    for (i = 0; i < 5; i++) { // Loop para exibir os dados cadastrados
        printf("Produto: %s, Total: R$ %.2f\n", produtos[i].nome, produtos[i].preco * produtos[i].quantidade);
    }

    return 0;
}