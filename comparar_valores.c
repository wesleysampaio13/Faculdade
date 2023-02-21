#include <stdio.h>
int main(void){
    int valor1 = 0;
    int valor2 = 0;

    printf("\n Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("\n Digie o segundo valor: ");
    scanf("%d", &valor2);
    printf("\n Valor1 e Valor 2 são iguais? %d", valor1 == valor2);
    printf("\n Valor1 é diferente de Valor2? %d", valor1 != valor2 );
    printf("\n Valor1 é maior ou igual ao Valor2? %d", valor1 >= valor2);
    printf("\n Valor1 é menor ou igual ao Valor2? %d", valor1 <= valor2);
}