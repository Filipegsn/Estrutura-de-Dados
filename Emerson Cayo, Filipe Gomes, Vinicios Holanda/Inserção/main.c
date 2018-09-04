#include <stdio.h>
#include <stdlib.h>


struct test{
int num;
};

int main()
{
    int i,cont,t,troca;
    struct test q1[10];

    printf("Digite 10 Numero:\n");
    for(i=0;i<10;i++){
    scanf("%i",&q1[i].num);

    }

    for(i=1;i<10;i++){
     t=i ;
     while(q1[t].num < q1[t-1].num && t>0 ){
        troca = q1[t].num;
        q1[t].num = q1[t-1].num;
        q1[t-1].num = troca;
        t--;
     }
    }
    printf("\n\n\n Aplicando a Insercao: ");
    for(i=0;i<10;i++){
    printf("%i, ",q1[i].num);
}
    return 0;
}
