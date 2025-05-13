#include <stdio.h>

int main() {
    int numero = 2; //Aqui na variavel escolhe qual tabuada você vai querer

    printf("Tabuada do %d:\n", numero);
    for (int i = 1; i <= 10; i++) {//o for(estrutura de repetição) usa uma variável para controlar o loop
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}