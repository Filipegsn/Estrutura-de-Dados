#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 3
struct endereco
{
    char rua[20];
    char bairro[20];
    char cidade[20];
    char estado[4];
    int cep;
};
struct nota
{
    int identidade;
    int matricula;
    char curso[10];
    int n1;
    int n2;
};
struct aluno
{
    char nome[20];
    int idade;
    struct endereco ed;
    struct nota nt;
};
int main()
{
    char sx[1], pesq[20];
    int op, indice=0, i = 0, x = 0;
    struct aluno a1[MAX];
    do
    {
        system("cls");
        printf("\n\t\t ------### MENU DE OPCOES ###------");
        printf("\n 1 - CADASTRAR \n");
        printf("\n 2 - LISTAR TODOS \n");
        printf("\n 3 - LISTAR P/ SEXO \n");
        printf("\n 4 - ORDENAR P/ MATRICULA \n");
        printf("\n 5 - ORDENAR P/ CURSO \n");
        printf("\n 6 - ENCERRAR PROGRAMA \n");
        printf("\n # - ESCOLHA SUA OPCAO: ");
        scanf(" %i", &op);
        fflush(stdin);
        switch(op)
        {
        case 1:
            system("cls");
            printf("\t\t ------ ## CADASTRO DE CONTATOS ##----- \n");
            printf("\t\t ------ # INFORMACOES PESSOAIS   #----- \n");
            printf("\n NOME: \n");
            gets(a1[indice].nome);
            fflush(stdin);
            printf("\n IDADE: \n");
            scanf(" %i", &a1[indice].idade);
            printf("\n SEXO: (f)feminino (m)masculino\n");
            scanf(" %s", &sx);
            fflush(stdin);
            printf("\t\t ------ # ENDERECO # ----- \n");
            printf("\n RUA:");
            gets(a1[indice].ed.rua);
            fflush(stdin);
            printf("\n CEP DA RUA:");
            scanf(" %i", &a1[indice].ed.cep);
            fflush(stdin);
            printf("\n BAIRRO:");
            gets( a1[indice].ed.bairro);
            fflush(stdin);
            printf("\n CIDADE:");
            gets( a1[indice].ed.cidade);
            fflush(stdin);
            printf("\n ESTADO:");
            gets( a1[indice].ed.estado);
            fflush(stdin);
            printf("\t\t ------ # INFORMACOES ESCOLARES # ----- \n");
            printf("\n IDENTIDADE:");
            scanf(" %i", &a1[indice].nt.identidade);
            fflush(stdin);
            printf("\n MATRICULA:");
            scanf(" %i", &a1[indice].nt.matricula);
            fflush(stdin);
            printf("\n NOTA 1:");
            scanf(" %i", &a1[indice].nt.n1);
            printf("\n NOTA 2:");
            scanf(" %i", &a1[indice].nt.n2);
            fflush(stdin);
            printf("\n CURSO:");
            gets(a1[indice].nt.curso);
            fflush(stdin);

            indice ++;
            system("pause");
            break;

        case 2:
            system("cls");
            printf("\t\t ------ ## LISTA de CONTATOS ## -----");
            for(i=0; i < indice ; i++)
            {
                printf("\n NOME:  %s ", a1[i].nome);
                printf("\n IDADE: %i ", a1[i].idade);
                printf("\n CURSO: %s ", a1[i].nt.curso);
            }
            printf("\n");
            system("pause");
            break;

        case 3:
            system("cls");
            printf("\t\t ------ ## LISTA de CONTATOS por SEXO ## -----");
            for(i=0; i< indice; i++)
            {
                printf("\n SEXO: %s", sx);
                printf("\n NOME: %s", a1[i].nome);
                printf("\n IDADE: %i", a1[i].idade);
            }
            system("pause");
            break;

        case 4:
            system("cls");

            printf("\n\t\t------### ORGANIZAR POR MATRICULA ###------\n (ordem alfabetica) \n\n");
                for(i = 1; i < indice; i++)
                {
                    for(x=0; x < indice-1; x++)
                    {
                        if(strcmp(a1[x].nt.matricula , a1[x+1].nt.matricula)>0)
                        {
                            strcpy(pesq,a1[x].nt.matricula);
                            strcpy(a1[x].nt.matricula, a1[x+1].nt.matricula);
                            strcpy(a1[x+1].nt.matricula, pesq);

                        }
                    }
                            for(i=0; i<indice; i++)
                            {
                                printf("\nNOME:  %s \n", a1[i].nt.matricula);
                            }
                }
        system("pause");
            break;

        case 5:
            system("cls");
            printf("\t\t ------ ## ORDENACAO por CURSO ## ------");
            for(i=1; i<indice; i++)
            {
                for(x=0; x<indice-1; x++)
                {
                     if(strcmp(a1[x].nt.curso , a1[x+1].nt.curso)>0)
                     {
                        strcpy(pesq,a1[x].nt.curso);
                        strcpy(a1[x].nt.curso, a1[x+1].nt.curso);
                        strcpy(a1[x+1].nt.curso, pesq);

                     }
                }
                    for(i=0; i<indice; i++)
                    {
                                printf("\nNOME:  %s \n", a1[i].nt.curso);
                    }
            }
            system("pause");
            break;

        case 6:
            system("cls");
            printf("\t\t ------- ### PARA ENCERRAR CUMPRA OS PASSOS A SEGUIR: ### ------ \n");
            printf("\n 1 - DE 10 PRA ESSE MENINO.");
            printf("\n 2 - DE 10 PRA TURMA TODA.");
            printf("\n 3 - SEJA FELIZ...");
            system("pause");
            break;
        }
    }
    while (op!=6);
    return 0;
}
