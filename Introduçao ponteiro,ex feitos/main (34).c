#include <stdio.h>

#include "alunos.h"
#include "notas.h"


int main() {
    Aluno alunos[10];
    Nota notas[50];
    int opcao, contAluno = 0, contNota = 0;
    
    do{
    
    printf("Sistema Escolar\n");
    printf("1 -Cadastrar aluno\n");
    printf("2 -Cadastrar nota\n");
    printf("3 -Calcular media\n");
    printf("0 -Sair\n");
    printf("Selecione uma opcao :");
    scanf("%d", &opcao);
    
    switch(opcao){
        case 1:
            cadastrarAluno(&alunos[contAluno], &contAluno);
            
            break;
         case 2:
         cadastrarNota(&notas[contNota], &contNota);
         break;
         case 3:
         calcularMedia(alunos, notas);
         break;
         case 0:
         break;
         default:
         break;
    }
    
    }while(opcao != 0);
    
    return 0;
}

