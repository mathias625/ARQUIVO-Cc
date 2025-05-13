#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    int num1, num2;
    printf ("Digite um número:\n");
    scanf("%d" ,&num1);//o scanf é responsável por ler um dado e atribuir a uma variável

    printf("Digite outro número:\n");
    scanf("%d", &num2);
    if (num1 > num2){//O if serve para dar uma condição autêntica,para que quando não verdadeira a compilação vá por outra alternativa(else)
        printf("%d é maior", num1);
    } else {
        printf("%d é maior", num2);
    }
    return 0;//indica que o programa foi concluido sem erros
}