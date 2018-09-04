#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{


    int op, op2,caso;
    pilha p;
    agendas l;
    p.topo= -1;

    printf("\t\t---###---MENU---###---\n");
    printf("1 - fila \n");
    printf("2 - pilha \n");
    printf("3 - saida \n");
    printf("Escolha uma opção \n");
    scanf("%i"&op);

    switch (op){
    case 1:
        system("cls");
        system("pause");
        break;

    case 2:
        do{
        system("cls");
            printf("1 - EMPILHAR \n");
            printf("2 - DESEMPILHAR \n");
            printf("3 - LISTAR \n");
            printf("4 - SAIR \n");
            printf("ESCOLHA \n");
            scanf("%i", &op2);
            switch (op2){
            case 1:
                if (cheia(&p) == 1){
                    printf("!!! PILHA CHEIA, ESCOLHA OUTRA OPÇÃO !!!");
                    system("pause");
                }else{
                    empilha(&p,l);
                }
                break;
            case 2:
                system("cls");
                desempilha(pilha *val);
                system("pause");
                break;
            case 3:
                system("cls");
                listar(pilha *val);
                system("pause");
                break;
            case 4:
                lista_topo(pilha *val);
                break;
            case 5:
                system("cls");
                printf("adios");
                system("pause");
            break;
            }while (op2!=5);
        system("pause");
        break;

    case 3:
        system("cls");
        system("pause");
        break;
    }
    return 0;
}while (op!=3);
