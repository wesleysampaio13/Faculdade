#include <stdio.h>

int main(void){
    float valor = 0, resultado = 0;
    int resp;
    
    do{
        printf("\n Digite o valor da mercadoria: ");
        scanf("%f", &valor);
        
        resultado = valor - valor * 30 / 100;
        printf("\n Preço de custo = %.2f", resultado);
        printf("\n Digite 1 para continuar ou 2 para sair: ");
        scanf("%d", &resp);
    }while (resp == 1);

    return 0;
}