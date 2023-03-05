#include <stdio.h>
int main(void){
    int parar = 0;
    float nota;
    
    printf("\n Digite a nota final do aluno: ");
    scanf("%f",&nota);

    while (parar != 1)
    {
        if (nota < 0 || nota > 10)
        {
            printf("\n Nota INVÁLIDA! Digite a nota final do aluno: ");
            scanf("%f", &nota);
        }else{
            printf("\n Nota VÁLIDA, encerrando...");
            parar = 1;
        }
        return 0;
    }
    
}