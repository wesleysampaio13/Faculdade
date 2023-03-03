#include <stdio.h>
#define  NOME_COMPLETO 100

struct pagamento{
    char nome[NOME_COMPLETO];
    float total;
};

int main(void){
    struct pagamento cli;
    char x;

    printf("\n CLIENTE: ");
    fflush(stdin);
    fgets(cli.nome, NOME_COMPLETO, stdin);

    printf("\n Escolha o serviço desejado: ");
    printf("\n [1] Lavação Normal");
    printf("\n [2] Polimento");
    printf("\n [3] Higienização");
    printf("\n [4] Tratamento do Motor");
    printf("\n Digite sua opção: ");
    scanf("%s",&x);

    switch(x) {
        
        case '1':
        printf("\n Você escolheu o serviço LAVAÇÃO NORMAL");
        break;

        case '2':
        printf("\n Você escolheu o serviço POLIMENTO");
        break;

        case '3':
        printf("\n Você escolheu o serviço HIGIENIZAÇÃO");
        break;

        case '4':
        printf("\n Você escolheu o serviço TRATAMENTO DE MOTOR");
        break;
    }
    return 0;
}