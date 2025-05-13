#include <stdio.h>

// Definição da struct Aluno
struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {
    struct Aluno aluno; // Declaração de uma variável do tipo struct Aluno

    // Leitura dos dados do aluno
    printf("Nome: ");
    scanf("%s", aluno.nome);
    printf("Idade: ");
    scanf("%d", &aluno.idade);
    printf("Nota: ");
    scanf("%f", &aluno.nota);

    // Exibição dos dados do aluno
    printf("Aluno: %s, Idade: %d, Nota: %.2f\n", aluno.nome, aluno.idade, aluno.nota);
    return 0;
}