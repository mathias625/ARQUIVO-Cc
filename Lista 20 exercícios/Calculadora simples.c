#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
    int opcao;
    float num1 , num2 , resultado;
    
    do{//O do exige que o código seja executado por uma vez pelo menos
        
        //exibe o menu
        printf("/n---- Calculadora simples----\n");
        printf("1 - adição\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("0 - sair\n");
        printf("Escolha uma opção\n ");
        scanf("%d",&opcao);
        
        switch(opcao){//O switch da uma condição para executar diferentes situações de com base no valor de uma variável ou expressão
            case 1:
            printf("Digite os dois numeros");
            scanf("%f %f", &num1, &num2);
            resultado = num1 + num2;
            printf("resultado: %2.f\n", resultado);
            break;//o break interrompe o loop
            
            case 2:
             printf("Digite os dois numeros");
            scanf("%f %f", &num1, &num2);
            resultado = num1 - num2;
            printf("resultado: %2.f\n", resultado);
            break;
            
            case 3:
             printf("Digite os dois numeros");
            scanf("%f %f", &num1, &num2);//%f=float
            resultado = num1 * num2;
            printf("resultado: %2.f\n", resultado);
            break;
            
            
            case 4:
             printf("Digite os dois numeros");
            scanf("%f %f", &num1, &num2);
            if (num2 !=0){
                resultado = num1 / num2;
                printf("Resultado:%2.f\n", resultado);
                }else{
                    printf("Erro:divisão por zero!\n");
                }
                break;
                case 0:
                printf("Saindo...\n");
                break;
                default:
                printf("Opcao invalida! Tente novamente.\n");
            }
              }while (opcao!= 0);
              return 0;
            

        }
    
    
    
