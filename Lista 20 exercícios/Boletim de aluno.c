#include <stdio.h>

// Definição da struct Aluno
struct Aluno {
    char nome[50];
    float notas[3];
};

int main() {
    struct Aluno aluno;
    float media = 0;
    int i;

    printf("Nome do aluno: ");
    scanf("%s", aluno.nome);

    // Leitura das três notas
    for (i = 0; i < 3; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &aluno.notas[i]);
        media += aluno.notas[i];
    }

    media /= 3; // Cálculo da média do aluno

    // Exibição da média e status de aprovação
    printf("Aluno: %s, Média: %.2f - %s\n", aluno.nome, media, (media >= 7) ? "Aprovado" : "Reprovado");

    return 0;
}