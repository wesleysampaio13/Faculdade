#include <stdio.h>

int main(void){

    /* tc = total compra || nc = nome do cliente */

    char nc[40];
    float tc, taxa;
    int opcao;

    printf("----------FORMAS DE PAGAMENTO----------");
    printf("\n Digite o nome do cliente: ");
    scanf("%s", &nc);
    printf("\n Valor Total da compra: ");
    scanf("%f", &tc);

    printf("\n Escolha a forma de pagamento");
    printf("\n [1] CREDITO/VISA/MASTERCARD");
    printf("\n [2] DEBEITO/VISA/MASTERCAD");
    printf("\n [3] CREDITO/ELO");
    printf("\n Digite sua opcao: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            taxa = tc * 2.6 / 100 + tc;
            printf("\n %s o total da compra e %.2f", nc, taxa);
            break;
        case 2:
            taxa = tc * 1.9 / 100 + tc;
            printf("\n %s o total da compra e %.2f", nc, taxa);
            break;
        case 3:
            taxa = tc * 3.6 / 100 + tc;
            printf("\n %s o total da compra e %.2f", nc, taxa);
            break;
    }
    return 0;
}