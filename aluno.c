#include <stdio.h>
struct media {
    char nome[30];
    char disciplina[30];
    float nota_av1, nota_av2, media;
};
int main(void){
    struct media aluno;

    printf("\n----------DADOS DO ALUNO----------");

    printf("\n Nome do aluno: ");
    fflush(stdin);
    fgets(aluno.nome, 30, stdin);
    printf("\nNome da Disciplina: ");
    fflush(stdin);
    fgets(aluno.disciplina, 30, stdin);

    printf("\n----------NOTA DAS AVALIAÇÕES----------");
    printf("\n Nota da primeira avaliação: ");
    scanf("\n %f",&aluno.nota_av1);
    printf("\n Nota da segunda avaliação: ");
    scanf("\n %f",&aluno.nota_av2);

    printf("----------RESULTADO FINAL----------");
    aluno.media = (aluno.nota_av1 + aluno.nota_av2) / 2;
    printf("\n A média do Aluno = %2.f", aluno.media);
}