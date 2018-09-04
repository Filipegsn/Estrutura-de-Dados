#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 3
struct pessoa{
char nome [30];
};
struct data{
int dia;
int mes;
int ano;
};
struct compromisso{
char comp[50];
struct pessoa pp;
struct data dt;
};
int main()
{
int op; int i=0; int indice; int x=0; struct compromisso c1[MAX];
    do{
    system("cls");
    printf("\n\t\t------### AGENDA DE CONTATOS ###------ \n");
    printf("\n 1 - ADICIONAR PESSOA \n");
    printf("\n 2 - LISTAR PESSOAS \n");
    printf("\n 3 - ORDENAR POR PESSOA \n");
    printf("\n 4 - PESQUISAR POR DATA \n");
    printf("\n ESCOLHA UMA OPCAO \n");
    scanf("%d", &op);
    fflush(stdin);

        switch(op){
        case 1:
            system("cls");
            printf("\n\t\t ------## ADICIONAR PESSOA ##------ \n");
            printf("\n DIGITE O NOME DA PESSOA \n");
            gets(c1[MAX].pp.nome);
            fflush(stdin);
            printf("\n DIGITE A DATA DO COMPROMISSO (dia, mes e ano) \n");
            scanf("\n\t %d %d %d", &c1[MAX].dt.dia, &c1[MAX].dt.mes, &c1[MAX].dt.ano);
            fflush(stdin);
            printf("\n\ DIGITE QUAL O COMPROMISSO \n");
            gets(c1[MAX].comp);
            fflush(stdin);

            indice ++;
            i ++;
            system("pause");
            break;
        case 2:
            system("cls");
            printf("\n\t\t ------## LISTAR TODOS ##------ \n");
            for(i= 0; i<= indice; i++){
            printf("\n PESSOA:      %s", c1[indice].pp.nome);
            printf("\n DATA:        %d / %d / %d", c1[indice].dt.dia, c1[indice].dt.mes, c1[indice].dt.ano);
            printf("\n COMPROMISSO: %s", c1[indice].comp);
            }
            system("pause");
            break;
        case 3:
            system("cls");
            printf("\n\t\t ------## ORDENAR POR PESSOA ##------ \n");
                for(i = 1; i < indice; i++){
                    for(x=0; x < indice-1; x++){
                        if(strcmp(c1[x].pp.nome, c1[x+1].pp.nome)>0)
                        {
                            strcpy(c1[x].pp.nome, c1[x+1].pp.nome);
                        }
                    }
                            for(i=0; i<indice; i++){
                                printf("\n PESSOAS:  %s \n", c1[i].pp.nome);
                            }
                }
            system("pause");
            break;
        case 4:
            system("cls");
            printf("");
            system("pause");
            break;
        }
    }while (op!=4);
    return 0;
}
