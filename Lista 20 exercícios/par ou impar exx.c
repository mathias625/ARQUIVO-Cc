#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    int num;
    printf ("Digite um número:\n");
    scanf("%d" ,&num);
    if (num % 2 == 0){ //O if serve para dar uma condição autêntica,para que quando não verdadeira a compilação vá por outra alternativa(else)
        printf("Número par");
    } else {
        printf("Número ímpar");
    }
    return 0;
}