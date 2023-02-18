#include <stdio.h>
struct automovel{
    char modelo[20];
    int ano;
    float valor;
};
int main(void){
    struct automovel dados_automovel1;
    printf("\n-----DADOS AUTOMÓVEL-----");
    printf("\n Digite o modelo do veículo: ");
    scanf("%s",dados_automovel1.modelo);
    printf("\n Digite o ano do veículo: ");
    scanf("%d",&dados_automovel1.ano);
    printf("\nDigite o valor do veículo: ");
    scanf("%f",&dados_automovel1.valor);

    printf("\n Modelo: %s",dados_automovel1.modelo);
    printf("\n Ano: %d",dados_automovel1.ano);
    printf("\n Valor: %f",dados_automovel1.valor);
}