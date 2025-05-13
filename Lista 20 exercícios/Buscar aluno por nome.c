#include <stdio.h>
#include <string.h>

// Definição da struct Aluno
struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {
    struct Aluno alunos[3]; // Vetor de 3 alunos
    char busca[50]; // Nome para busca
    int i, encontrado = 0;

    for (i = 0; i < 3; i++) { // Cadastro dos alunos
        printf("Nome do aluno: ");
        scanf("%s", alunos[i].nome);
        printf("Idade: ");
        scanf("%d", &alunos[i].idade);
        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
    }

    printf("Digite um nome para busca: ");
    scanf("%s", busca);

    for (i = 0; i < 3; i++) { // Busca pelo nome
        if (strcmp(alunos[i].nome, busca) == 0) {
            printf("Aluno encontrado: %s, Idade: %d, Nota: %.2f\n", alunos[i].nome, alunos[i].idade, alunos[i].nota);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado)
        printf("Aluno não encontrado.\n");

    return 0;
}