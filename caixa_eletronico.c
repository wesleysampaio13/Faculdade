#include <stdio.h>
int main(void){
    int n;
    printf("\n(1) para Saldo\n(2)para Extrato\n(3) para Saque\n(4) para Sair");
    printf("\n Escolha uma opção: ");
    scanf("%d",&n);

    switch(n){
        case 1:
            printf("\n Saldo");
            break;
        case 2:
            printf("\n Extrato");
            break;
        case 3:
            printf("\n Saque");
            break;
        case 4:
            printf("\n para Sair\n");
            break;
    }
    return 0;
}