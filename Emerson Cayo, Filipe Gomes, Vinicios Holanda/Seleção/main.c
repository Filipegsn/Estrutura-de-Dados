#include <stdio.h>
#include <stdlib.h>

struct test{
int num;
};

int main()
{
    int i,menor,t,troca;
    struct test q1[10];

    printf("Digite 10 Numero:\n");
    for(i=0;i<10;i++){
    scanf("%i",&q1[i].num);

    }
    for(i=0;i<10;i++){
        menor = i;
    for(t = i+1;t < 10;t++){
        if(q1[t].num < q1[menor].num){
            menor = t;
        }
    }
    troca = q1[i].num;
    q1[i].num = q1[menor].num;
    q1[menor].num = troca;
    }

     printf("\n\n\n Aplicando a Selecao: ");
    for(i=0;i<10;i++){
    printf("%i, ",q1[i].num);
}

    return 0;
}
