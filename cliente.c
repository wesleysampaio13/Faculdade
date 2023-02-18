#include <stdio.h>
#define NOME_CLIENTE 100
struct cliente{
    char nome[NOME_CLIENTE];
    int idade;
};

int main(void){
    struct cliente cli;
    int classificacao_filme;
    
    printf("\n Informe o nome do cliente: ");
    fflush(stdin);
    fgets(cli.nome, NOME_CLIENTE, stdin);

    printf("\n Informe a idade do cliente: ");
    scanf("\n %d", &cli.idade);

    printf("\n Informe a classificação do filme: ");
    scanf("\n %d",&classificacao_filme);

    printf("\n Cliente: %s", cli.nome);
    printf("\n Idade: %d \n", cli.idade);
    printf("\n Classificação do filme: %d anos \n", classificacao_filme);
    return 0;
}