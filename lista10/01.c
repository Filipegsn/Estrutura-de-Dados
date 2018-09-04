#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *inteiro, i;
    inteiro= (int*) malloc(5* sizeof(int));
    for (i=0; i<5; i++){
        printf("Digite um numero: ");
        scanf("\n %d", &inteiro[i]);
    }
    printf("\n Mostrando tudo: ");
    for (i=0; i<5; i++){
        printf(" %d, ", inteiro[i]);
    }
    printf("\n Liberando tudo ");
    free(inteiro);
    printf("\n ... ");
    printf("\n espaco liberado ");
    printf("\n\n");
    return 0;
}
