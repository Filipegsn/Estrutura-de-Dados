#include <stdio.h>
#include <stdlib.h>
struct identificacao{
    char nome[50], endereco[50];
    int idade;
};
int main()
{
    struct identificacao p1;
        printf("\n NOME :");
        gets(p1.nome);
        printf("\n IDADE :");
        scanf("%i", &p1.idade);
        fflush(stdin);
        printf("\n ENDERENCO :");
        gets(p1.endereco);
        printf("\n\n\n");
    return 0;
}
