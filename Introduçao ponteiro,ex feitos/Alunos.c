#include <stdio.h>
#include<stdlib.h>

#include "alunos.h"

void cadastrarAluno(Aluno *aluno, int *conta){
    printf("Cadastrar aluno\n");
    printf("Informe a matricula\n");
    scanf("%d", &aluno->matricula);
    printf("Informe o nome :");
    scanf(" %[^\n]", aluno->nome);
    *conta = *conta + 1;
}