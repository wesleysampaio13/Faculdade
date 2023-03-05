#include <stdio.h>

int main(void){
    int qtde_notas = 0, opcao;
    float nota, media, soma_notas = 0.0;

    do{
        printf("\n Digite a nota do aluno %d: ", qtde_notas + 1);
        scanf("%f", &nota);
        qtde_notas += 1;
        soma_notas += nota;
        printf("\n Digite 1 para informar outra nota ou 2 para encerrar: ");
        scanf("%d", &opcao);
    }while (opcao != 2);
    printf("\n Quantidade de notas = %d", qtde_notas);
    media = soma_notas / (float) qtde_notas;
    printf("\n Média das notas = %.2f", media);
    return 0;
}