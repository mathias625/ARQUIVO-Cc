#include <stdio.h>

// Definição da struct Pessoa
struct Pessoa {
    char nome[50];
    int idade;
};

int main() {
    struct Pessoa p1, p2;

    // Leitura dos dados das duas pessoas
    printf("Nome da primeira pessoa: ");
    scanf("%s", p1.nome);
    printf("Idade: ");
    scanf("%d", &p1.idade);

    printf("Nome da segunda pessoa: ");
    scanf("%s", p2.nome);
    printf("Idade: ");
    scanf("%d", &p2.idade);

    // Comparação das idades
    if (p1.idade > p2.idade)
        printf("%s é mais velho.\n", p1.nome);
    else if (p1.idade < p2.idade)
        printf("%s é mais velho.\n", p2.nome);
    else
        printf("Ambos têm a mesma idade.\n");

    return 0;
}