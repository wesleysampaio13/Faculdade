#include <stdio.h>

int main(void){
    float metragem1, metragem2, resuldado;

    int resp;
    metragem1 = 0;
    metragem2 = 0;
    resuldado = 0;

    printf("\n C Á L C U L O  D E   M E T R O S   Q U A D R A D O S");
    do{
        printf("\n Digite a primeira metragem: ");
        scanf("%f", &metragem1);
        printf("\n Digite a segunda metragem: ");
        scanf("%f", &metragem2);
        resuldado = metragem1 * metragem2;
        printf("\n Terreno tem = %2.f m2", resuldado);
        printf("\n Digite 1 para continuar ou 2 para sair: ");
        scanf("%d", &resp);

    }while (resp == 1);

    return 0;   
}