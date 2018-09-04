#include <stdio.h>
#include <stdlib.h>

int main()
{
int m[4][4];
int l,c,i;
    i=0;
        for (l=0;l<4;l++){
            for (c=0;c<4;c++){
                printf("Digite um valor :");
                scanf("%i", &m[l][c]);
                if (m[l][c]>10){
                    i ++;
                }
            }
        }
    printf("\nA quantia de valores maiores que 10 e: %i", i);
    printf("\n\n\n");
    return 0;
}
