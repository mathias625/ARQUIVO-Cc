#include <stdio.h>

// Definição da struct Aluno
struct Aluno {
    char nome[50];
    float mediaFinal;
};

int main() {
    struct Aluno alunos[5]; // Vetor de 5 alunos
    float soma = 0;
    int i;

    for (i = 0; i < 5; i++) { // Cadastro dos alunos
        printf("Nome do aluno: ");
        scanf("%s", alunos[i].nome);
        printf("Média final: ");
        scanf("%f", &alunos[i].mediaFinal);
        soma += alunos[i].mediaFinal;
    }

    // Exibição da média geral da turma
    printf("Média geral da turma: %.2f\n", soma / 5);
    return 0;
}