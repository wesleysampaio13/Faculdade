#include <stdio.h>

int main(void){
    int num;

    printf("\n Digite um número: ");
    scanf("%d",&num);

    if(num % 2 == 0){
        printf("\n ESSE NÚMERO É PAR");
    }else{
        printf("\n ESSE NÚMERO É IMPAR");
    }
        return 0;
}