#include <stdio.h>
#include <stdlib.h>
    struct horario{
        int hora,minutos,segundos;
    };
    struct data{
        int dia,mes,ano;
    };
    struct compromisso{
        char text[50];
        struct horario hr;
        struct data dt;
    };
int main()
{
    struct compromisso c1;

        printf("\t----------------AGENDA DE COMPROMISSOS--------------------");
        printf("\n\t\t------DESCRICAO DE COMPROMISSO---------\n\t\t\t");
        gets(c1.text);
        printf("\n\t\t-----------HORA & DATA----------------");
            fflush(stdin);
        printf("\nHora :");
        scanf("%i", &c1.hr.hora);
            fflush(stdin);
        printf("\nMinutos :");
        scanf("%i", &c1.hr.minutos);
            fflush(stdin);
        printf("\nSegundos :");
        scanf("%i", &c1.hr.segundos);
            fflush(stdin);
        printf("\nDia :");
        scanf("%i", &c1.dt.dia);
            fflush(stdin);
        printf("\nMes :");
        scanf("%i", &c1.dt.mes);
            fflush(stdin);
        printf("\nAno :");
        scanf("%i", &c1.dt.ano);

        printf("\n\n\n\n");

    return 0;
}
