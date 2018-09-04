#include <stdio.h>
#include <stdlib.h>

int main()
{
   int *inteiro, x, i;
   printf("Digite o tamanho maximo do seu vetor: ");
   scanf("\n %d", &x);
   inteiro= (int*) malloc(x* sizeof(int));
   for (i=0; i<x; i++){
    printf("\n Digite os numeros de seu vetor: ");
    scanf("\n %d, ", &inteiro[i]);
   }
   printf("\n\n");
   for (i=0; i<x; i++){
    printf("\n Numero: %d", inteiro[i]);
   }
   printf("\n\n");
    return 0;
}
