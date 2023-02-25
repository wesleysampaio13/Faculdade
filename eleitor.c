#include <stdio.h>
#define NOME_ELEITOR1 100
#define NOME_ELEITOR2 100

struct eleitor1{
    char nome1[NOME_ELEITOR1];
    int idade1;
};

struct eleitor2{
    char nome2[NOME_ELEITOR2];
    int idade2;
};

int main(void){
    struct eleitor1 cid1;
    struct eleitor2 cid2;

    printf("\n ----- ELEITOR 1 ----- \n");
    printf("\nDigite seu primeiro nome: ");
    fflush(stdin);
    fgets(cid1.nome1, NOME_ELEITOR1, stdin);
    printf("\n Digite sua idade: ");
    scanf("%d",&cid1.idade1);

    printf("\n ----- ELEITOR 2 ----- \n");
    printf("\n Digite seu primeiro nome: ");
    fflush(stdin);
    fgets(cid2.nome2, NOME_ELEITOR2, stdin);
    printf("\n Digite sua idade: ");
    scanf("%d",&cid2.idade2);

    if (cid1.idade1 && cid2.idade2 >= 18){
        printf("\n Estão aptos para votar");   
    } else {
        printf("\n Não estão aptos para votar");
    }    

    return 0;
}