#include <stdio.h>
int main(void){
    int contador;
    printf("\n Digite um número para a contagem regressiva: ");
    scanf("%d", &contador);
    for(contador; contador >= 1; contador--){
        printf("%d", contador);
    }
    return 0;
}