#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char *word; int tamanho,i;

   printf(" Digite o tamanho da sua palavra: \n\t");
   scanf("%d", &tamanho);

   word= (char*) malloc((tamanho++)*sizeof(char));
   fflush(stdin);
   printf("\n Digite a palavra: \n\t");
   gets(word);

   printf("\n\n"); printf("Palavra sem vogais:\n");

   for (i=0; i<tamanho; i++){
    if (word[i]!='a' && word[i]!='e' && word[i]!='i' && word[i]!='o' && word[i]!='u'){
        printf("\t%c", word[i]);
    }
   }
   printf("\n\n");
    return 0;
}
