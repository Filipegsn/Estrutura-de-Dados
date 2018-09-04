#include <stdio.h>
#include <stdlib.h>

int main()
{
int v[10];
int i,maior,menor;

    printf("Digite 10 numeros:\n");
    for (i=0;i<10;i++){
    scanf("%i", &v[i]);
    }
    maior = v[0];
    menor = v[0];
          for (i=0;i<10;i++){
                if (maior<v[i])
                    maior = v[i];
                if (menor>v[i])
                    menor = v[i];
          }
    printf("\n\nMaior valor: %i", maior);
    printf("\nMenor valor: %i", menor);

    printf("\n\n\n");
    return 0;
}
