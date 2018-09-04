#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *inteiro, x,i, par=0, impar=0;
    printf("\nDigite o tamanho do seu vetor:");
    scanf("\n %d", &x);
    inteiro= (int*) malloc(x* sizeof(int));
    for (i=0; i<x; i++){
        printf("\n Digite os numeros de seu vetor:");
        scanf("\n %d", &inteiro[i]);

        if(inteiro[i]%2==0){
            par++;
        }
        else{
            impar++;
        }
    }
     printf("\n Numero pares: %d \n Numeros impares: %d \n",par,impar);
     free(inteiro);

    printf("\n\n");
    return 0;
}
