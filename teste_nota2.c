#include <stdio.h>

int main(void){
    char parada;
    float nota;
    
    do {
        printf("\n Digite a nota final do aluno (min: 0; max: 10):");
        scanf("%f", &nota);
    }while (nota < 0 || nota > 10);
}