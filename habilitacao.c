#include <stdio.h>
#define NOME_CANDIDATO 30

struct habilitacao{
    char nome[NOME_CANDIDATO];
    int idade;
};

int main(void){
    struct habilitacao candidato;
    printf("\n Digite seu nome completo: ");
    fflush(stdin);
    fgets(candidato.nome, NOME_CANDIDATO, stdin);

    printf("\n Digite sua idade: ");
    scanf("%d",&candidato.idade);

    if (candidato.idade >= 18){
        printf("\n%s: Você está aprovado para tirar sua carteira de habilitação, sua idade é %d anos. \n", candidato.nome, candidato.idade);
    }else{
        printf("\n Você ainda não tem idade suficiente para tirar a carteira de habilitação.");
    }
}