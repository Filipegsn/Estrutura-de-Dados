#include <stdio.h>
#include <stdlib.h>
struct aluno{
    char nome[30],curso[30];
    int matricula;
};
int main()
{
int i;
    struct aluno a[2];
     for(i=0;i<2;i++){
    printf("\n NOME DO ALUNO : ");
    gets(a[i].nome);
        fflush(stdin);
    printf("\n MATRICULA : ");
    scanf("%i", &a[i].matricula);
        fflush(stdin);
    printf("\n CURSO : ");
    gets(a[i].curso);
        fflush(stdin);
     }
    printf("\n\t\t---------DADOS RECEBIDOS--------");
         for(i=0;i<2;i++){
    printf("\n %s", &a[i].nome);
    printf("\n %i", &a[i].matricula);
    printf("\n %s", &a[i].curso);
        }
    printf("\n\n\n");
    return 0;
}
