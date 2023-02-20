#include <stdio.h>
int main(void){
    char mes[15];
    int valor1 = 0;
    int valor2 = 0;
    int resultado = 0;
    
    printf("\n Informe o mês: ");
    fflush(stdin);
    fgets(mes, 15, stdin);

    printf("\n Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("\n Digite o segundo valor: ");
    scanf("%d", &valor2);

    resultado = valor1 % valor2;

    printf("\n O lucro obtido durante o mês de %s = %d", mes, resultado);
}