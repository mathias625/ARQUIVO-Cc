#include <stdio.h>
int main() {
    int idade;
    printf("Digite sua idade mathias: ");
    scanf("%d", &idade);
    if (idade < 16) {//O if serve para dar uma condição autêntica,para que quando não verdadeira a compilação vá por outra alternativa(else)
        printf("Você não pode votar.\n");
    } else if (idade >= 16 && idade <= 17 || idade >= 70) {
        printf("Seu voto é opcional.\n");
    } else if (idade >= 18 && idade <= 69) {//o else if possibilita verificar vaáris condições
        printf("Seu voto é obrigatório.\n");
    }

    return 0;
}
