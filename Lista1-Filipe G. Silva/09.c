#include <stdio.h>
#include <stdlib.h>

int main()
{
int m[3][3];
int l, c, r;

    for (l=0;l<3;l++){
        for (c=0;c<3;c++){
            printf("Digite os valores: ");
            scanf("%i", &m[l][c]);
            r = (m[0][0] + m[1][1] + m[2][2]);
        }
    }
    printf("\nA soma dos valores e:\n");
    printf("%i", r);
    printf("\n\n\n");
    return 0;
}
