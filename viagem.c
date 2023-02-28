#include <stdio.h>

int main(void){
    float orcamento;
    printf("\n Digite o valor do Orçamento: ");
    scanf("%f", &orcamento);

    if (orcamento >=1000){
        printf("\n Seu orçamento é compatível com a viagem planejada!");
    }else{
        printf("\n VOCÊ NÃO PODE FAZER ESSA VIAGEM!");
    }
    return 0;
}