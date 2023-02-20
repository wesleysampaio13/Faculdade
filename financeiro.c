#include <stdio.h>
int main(void){
    int valor1 = 0;
    int valor2 = 0;
    int resultado = 0;
    
    printf("\n Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("\n Digite o segundo valor: ");
    scanf("%d", &valor2);

    resultado = valor1 % valor2;

    printf("\n O lucro obtido durante o mês de janeiro = %d", resultado);
}