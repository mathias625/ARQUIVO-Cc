#include <stdio.h>
#include<stdlib.h>

#include "alunos.h"
#include "notas.h"



void cadastrarNota(Nota *nota, int *conta){
    printf("Cadastar nota\n");
    printf("Informe a matricula do aluno: ");
    scanf("%d", &nota->matricula);
    printf("Informe a nota :");
    scanf("%f", &nota->nota);
    *conta = *conta + 1;
}

void calcularMedia(Aluno alunos[], Nota notas[]){
    int matricula, qntNota = 0;
    float media = 0;
    printf("Informe uma matricula :");
    scanf("%d", &matricula);
    for(int i = 0;i < 10; i++){
        if(alunos[i].matricula == matricula){
            printf("Nome: %s\n", alunos[i].nome);
            break;
        }
    }
    for(int i = 0;i < 50; i++){
        if(notas[i].matricula == matricula) {
            media += notas[i].nota;
            qntNota++;
        }
    }
    printf("media : %2.f", (media / qntNota));
}