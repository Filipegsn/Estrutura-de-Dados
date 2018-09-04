#include <stdio.h>
#include <stdlib.h>
int main()
{
   int m[5][5];
   int l,c;

   for (l=0;l<5;l++){
    for (c=0;c<5;c++){
        if (l==c){
            m[l][c] = 1;
        }else{
            m[l][c] = 0;
        }
    }
   }
   printf("\t MATRIZ \n\n");
   for (l=0;l<5;l++){
        printf("\n");
        for (c=0;c<5;c++){
            printf("\t%i", m[l][c]);
        }
   }
   printf("\n\n\n");
    return 0;
}
