#include <stdio.h>
#define NOME_ALUNO 100

struct nota_final{
    char nome[NOME_ALUNO];
    float b1, b2, b3, b4, media;
    int idade;
};

int main(void){    
    struct nota_final aluno;

    printf("\n ----- DADOS ALUNO -----");
    printf("\n Nome Completo: ");
    fflush(stdin);
    fgets(aluno.nome, NOME_ALUNO, stdin);  
    printf("\n Idade: ");
    scanf("%d",&aluno.idade);
    printf("\n NOTA 1: ");
    scanf("%f",&aluno.b1);
    printf("\n NOTA 2: ");
    scanf("%f",&aluno.b2);
    printf("\n NOTA 3: ");
    scanf("%f",&aluno.b3);
    printf("\n NOTA 4: ");
    scanf("%f",&aluno.b4);
    
    printf("\n ----- RESULTADO FINAL ----");
    aluno.media = (aluno.b1 + aluno.b2 + aluno.b3 + aluno.b4) / 4;
    printf("\n A média final do aluno é: %3.f", aluno.media);

    if (aluno.media >= 70){
        printf("\n Aluno APROVADO!");
    }else{
        if (aluno.media >= 60 ){
            printf("\n Aluno está de RECUPERAÇÃO!");
        }else{
            printf("\n Aluno REPROVADO!");
        }
    }
    return 0;
}