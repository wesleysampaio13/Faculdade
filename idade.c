#include <stdio.h>
int main(void){
    int idade1 = 1;
    int idade2 = 2;
    int resultado = 0;

    printf("\n Digite a primeira idade: ");
    scanf("%d", &idade1);
    printf("\n Digite a segunda idade: ");
    scanf("%d", &idade2);
    resultado = idade1 + idade2;
    printf("\n Resultado = %d", resultado);
}