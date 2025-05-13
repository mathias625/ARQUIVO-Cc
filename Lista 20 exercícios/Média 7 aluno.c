#include<stdio.h>
#include<stdlib.h>

int main()
{
  //Declaração das variáveis
  float nota1, nota2, media;
  
  //Entrada de dados
  printf("Digite a primeira nota do aluno: ");
  scanf("%f",&nota1);
  
  printf("Digite a segunda nota do aluno: ");
  scanf("%f",&nota2);
  
  //Processamento
  media = (nota1 + nota2) / 2;
  
  if(nota1>=7.0){//O if serve para dar uma condição autêntica,para que quando não verdadeira a compilação vá por outra alternativa(else)

      printf("Você foi aprovado mathias:\n");
  }else{
      printf("Você foi reprovado:\n");
  }
  
  //Saída
  printf("Media do aluno = %.1f\n",media);
  
  
  return 0;
}