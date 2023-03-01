#include <stdio.h>
int main(void){
    char x;
    float valor, desc, total;

    printf("\n Valor da compra: ");
    scanf("%f",&valor);
    printf("\n Digite a letra que representa que representa seu desconto de acordo com a cor: ");
    printf("\n A. azul");
    printf("\n V. vermelho");
    printf("\n B. branco");
    printf("\n Digite sua opção: ");
    scanf("%s", &x);

    switch(x) {
        case 'a':
        printf("\n Você escoheu azul, seu desconto será de 10 por cento");
        desc = 10;
        break;

        case 'v':
        printf("\n Você escolheu vermelho, seu desconto será de 20 por cento");
        desc = 20;
        break;

        case 'b':
        printf("\n Você escolher a cor branca, seu desconto será de 30 por cento");
        desc = 30;
        break;
    }
    total = valor - (valor * desc / 100);
    printf("\n O valor da sua compra é R$ %.2f", total);
    return 0;
}