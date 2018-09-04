#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 struct endereco{
char rua[20], comp[20], bairro[20], city[20], state[5], pais[10];
int n1, cep;
};
 struct telefone{
int dd;
int numero;
};
 struct aniversario{
int dia;
int ano;
char mes[10];
};
 struct dados{
char nome[20];
char email[20];
struct telefone tel;
struct endereco ed;
struct aniversario dt;
char OBS[50];
};
int main()
{
    struct dados d[100];
    int op,op2;
    int indice=0;
    int i,x,encontrou=0;
    int menor;
    char pesq[30];
    int pesq0;
    char pesq2[30];
    int cod;
    int sair;

do{
    system("cls");

    printf("\t\t--#############-- AGENDA PESSOAL --#############--\n\n");

    printf("\n  1 - ADICIONAR NOVO CONTATO \n");
    printf("\n  2 - PESQUISAR POR NOME \n");
    printf("\n  3 - PESQUISAR POR MES DE ANIVERSARIO \n");
    printf("\n  4 - PESQUISAR POR DIA&MES DE ANIVERSARIO \n");
    printf("\n  5 - DELETAR CONTATO \n");
    printf("\n  6 - ORGANIZAR POR NOME \n"); /// método bolha
    printf("\n  7 - ORGANIZAR POR NUMERO \n");/// seleção e inserção
    printf("\n  8 - LISTAR CONTATOS \n");
    printf("\n  9 - SAIR \n\n\n");
    printf("\n  ESCOLHER OPCAO ...");
    scanf("%d", &op);

    fflush(stdin);

    switch(op){
        case 1:
            system("cls");

            printf("\n\t\t------### ADICIONAR NOVO CONTATO ###------");
            printf("\n CODIGO:%i\n",indice);

            printf("\n\t\t------NOME,E-MAIL & TELEFONE------");
            printf("\n NOME:");
            gets(d[indice].nome);
            printf("\n EMAIL:");
            gets(d[indice].email);
            printf("\n\t\t------TELEFONE------");
            printf("\n DDD:");
            scanf("%d",&d[indice].tel.dd);
            printf("\n NUMERO:");
            scanf("%d",&d[indice].tel.numero);
            fflush(stdin);

            printf("\n\t\t------ ENDERECO ------");
            printf("\n RUA:");
            gets(d[indice].ed.rua);
            fflush(stdin);
            printf("\n NUMERO:");
            scanf("%d", &d[indice].ed.n1);
            fflush(stdin);;
            printf("\n COMPLEMENTO:");
            gets(d[indice].ed.comp);
            fflush(stdin);
            printf("\n CEP:");
            scanf("%d", &d[indice].ed.cep);
            fflush(stdin);
            printf("\n BAIRRO:");
            gets(d[indice].ed.bairro);
            fflush(stdin);
            printf("\n CIDADE:");
            gets(d[indice].ed.city);
            printf("\n ESTADO:");
            gets(d[indice].ed.state);
            fflush(stdin);
            printf("\n PAIS:");
            gets(d[indice].ed.pais);
            fflush(stdin);

            printf("\n\t\t------DATA DE ANIVERSARIO------");
            printf("\n DIA:");
            scanf("%d", &d[indice].dt.dia);
            fflush(stdin);
            printf("\n MES:");
            gets(d[indice].dt.mes);
            printf("\n ANO:");
            scanf("%d", &d[indice].dt.ano);
            fflush(stdin);

            indice++;

            system("pause");
            break;

        case 2:
            system("cls");

            printf("\n\t\t------### PESQUISAR POR NOME ###------");
            printf("\nPESQUISAR POR: ");
            gets(pesq);
            for(i=0; i<indice; i++)
            {
                if(strcmp(pesq,d[i].nome)==0)
                {
                    printf("\nCODIGO:%i", i);
                    printf("\n NOME:%s", d[i].nome);
                    printf("\n EMAIL:%s", d[i].email);
                    printf("\n TEL:%d %d", d[i].tel.dd, d[i].tel.numero);
                    printf("\n ANIVERSARIO: %d %s %d", d[i].dt.dia, d[i].dt.mes, d[i].dt.ano);
                    printf("\n ENDERECO: %s %s %s %s %s", d[i].ed.rua, d[i].ed.bairro, d[i].ed.city, d[i].ed.state, d[i].ed.pais);
                    encontrou++;
                }
            }
            if (encontrou == 0)
            {
                printf("\n!!!!!! NENHUM REGISTRO ENCONTRADO !!!!!!\n\n");
            }
            printf("\n\n");

        system("pause");
        break;

        case 3:
            system("cls");

            printf("\n\t\t------### PESQUISAR POR MES DE ANIVERSARIO ###------");
            printf("\nPESQUISAR:");
            gets(pesq);
            for(i=0; i<indice; i++)
            {
                if(strcmp(pesq, d[i].dt.mes)==0)
                {
                    printf("\n CODIGO:%i",i);
                    printf("\n MES: %i",d[i].dt.mes);
                    printf("\n NOME: %s", d[i].nome);
                    printf("\n EMAIL:%s",d[i].email);
                    printf("\n TEL:%d %i",d[i].tel.dd, d[i].tel.numero);
                    printf("\n ANIVERSARIO: %d %s %d", d[i].dt.dia, d[i].dt.mes, d[i].dt.ano);
                    printf("\n ENDERECO: %s %s %s %s %s", d[i].ed.rua, d[i].ed.bairro, d[i].ed.city, d[i].ed.state, d[i].ed.pais);
                    encontrou++;
                }
            }
            if (encontrou==0)
            {
                printf("\n!!!!!! NENHUM REGISTRO ENCONTRADO !!!!!!\n\n");
            }
            printf("\n\n");

        system("pause");
        break;

        case 4:
            system("cls");

            printf("\n\t\t------ PESQUISAR POR DIA & MES DE ANIVERSARIO ------");
            printf("\nPESQUISAR DIA: ");
            gets(pesq0);
            printf("\nPESQUISAR MES: ");
            gets(pesq2);
            for(i=0; i<indice; i++)
            {
                if(strcmp(pesq0,d[i].dt.dia)==0)
                {
                    printf("\n CODIGO:%i",i);
                    printf("\n DIA: %d", d[i].dt.dia);
                    printf("\n MES: %i",d[i].dt.mes);
                    printf("\n NOME: %s", d[i].nome);
                    printf("\n EMAIL:%s",d[i].email);
                    printf("\n TEL:%i %i",d[i].tel.dd, d[i].tel.numero);
                    printf("\n ANIVERSARIO: %d %s %d", d[i].dt.dia, d[i].dt.mes, d[i].dt.ano);
                    printf("\n ENDERECO: %s %s %s %s %s", d[i].ed.rua, d[i].ed.bairro, d[i].ed.city, d[i].ed.state, d[i].ed.pais);
                    encontrou++;
                }
            }
            for(i=0; i<indice; i++)
            {
                if(strcmp(pesq2,d[i].dt.mes)==0)
                {
                    printf("\n CODIGO:%i",i);
                    printf("\n DIA: %d", d[i].dt.dia);
                    printf("\n MES: %i",d[i].dt.mes);
                    printf("\n NOME: %s", d[i].nome);
                    printf("\n EMAIL:%s",d[i].email);
                    printf("\n TEL:%d %i",d[i].tel.dd, d[i].tel.numero);
                    printf("\n ANIVERSARIO: %d %s %d", d[i].dt.dia, d[i].dt.mes, d[i].dt.ano);
                    printf("\n ENDERECO: %s %s %s %s %s", d[i].ed.rua, d[i].ed.bairro, d[i].ed.city, d[i].ed.state, d[i].ed.pais);
                    encontrou++;
                }
            }
            if (encontrou==0)
            {
                printf("\n!!!!!! NENHUM REGISTRO ENCONTRADO !!!!!!\n\n");
            }
            printf("\n\n");

        system("pause");
        break;

        case 5:
            system("cls");


                for (i=0 ; i<indice ; i++){
                    strcpy(d[i].nome, d[i+1].nome);
                    strcpy(d[i].email, d[i+1].email);
                    d[i].tel.dd = d[i+1].tel.dd;
                    d[i].tel.numero = d[i+1].tel.numero;
                    d[i].dt.dia = d[i+1].dt.dia;
                    strcpy(d[i].dt.mes, d[i+1].dt.mes);
                    d[i].dt.ano = d[i+1].dt.ano;
                    strcpy(d[i].ed.rua, d[i+1].ed.rua);
                    strcpy(d[i].ed.bairro, d[i+1].ed.bairro);
                    strcpy(d[i].ed.city, d[i+1].ed.city);
                    strcpy(d[i].ed.state, d[i+1].ed.state);
                    strcpy(d[i].ed.pais, d[i+1].ed.pais);
                }
                    printf("CONTATO EXCLUIDO !!!!!!");
                indice--;

        system("pause");
        break;

        case 6:
            system("cls");

            printf("\n\t\t------### ORGANIZAR POR NOME ###------\n (ordem alfabetica) \n\n");
                for(i = 1; i < indice; i++)
                {
                    for(x=0; x < indice-1; x++)
                    {
                        if(strcmp(d[x].nome, d[x+1].nome)>0)
                        {
                            strcpy(pesq,d[x].nome);
                            strcpy(d[x].nome, d[x+1].nome);
                            strcpy(d[x+1].nome, pesq);

                        }
                    }
                            for(i=0; i<indice; i++)
                            {
                                printf("\nNOME:  %s \n", d[i].nome);
                            }
                }
        system("pause");
        break;

        case 7:
            system("cls");
            printf("\n\t\t ------### ORGANIZAR POR NUMERO ###------ \n");
                    for(i=1; i < d[i].tel.dd; i++) {
                        for(x=0; x < d[i].tel.dd-1; x++) {
                            for(i=1; i < d[i].tel.numero; i++) {
                                for(x=0; x < d[i].tel.numero-1; x++) {
                                }
                            }
                        }
                    }
                    for(i=0;i< d[i].tel.dd && d[i].tel.numero ;i++){
                    printf("\nNUMERO: %d - %d \n", d[i].tel.dd, d[i].tel.numero);
                    }
            system("pause");
            break;

        case 8:
            system("cls");

            printf("\n\t\t ------### LISTAR CONTATOS ###------ \n\n");
         for(i=0; i<indice; i++)
            {
                printf("\nCODIGO: %i",i);
                printf("\n NOME:%s",d[i].nome);
                printf("\n EMAIL:%s",d[i].email);
                printf("\n TEL:%d %d",d[i].tel.dd, d[i].tel.numero);
                printf("\n ANIVERSARIO: %d %s %d", d[i].dt.dia, d[i].dt.mes, d[i].dt.ano);
                printf("\n ENDERECO: %s %s %s %s %s", d[i].ed.rua, d[i].ed.bairro, d[i].ed.city, d[i].ed.state, d[i].ed.pais);
                printf("\n--------------------------------\n");
            }
            system("pause");
            break;

        case 9:
            system("cls");

            printf("SAINDO...");
            printf("\nAte logo, ate mais ver, bon voyage, arrivederci, ate mais, adeus, boa viagem,  \nva em paz, que a porta bata onde o sol nao bate, nao volte mais aqui, \nhasta la vista baby, ESCAFEDA-SE, e saia logo daqui !!!!!!!!");
            scanf("%d", &sair);
            printf("\n\n\n\n\n");
            break;
    }
}while(i!=9);
    return 0;
}
