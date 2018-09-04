#include <stdio.h>
#include <stdlib.h>
int DOBRO(int n){
int dobro;
dobro = (n*2);
return dobro;
}
int main()
{
int num;
    printf("\nDigite um numero:\n");
    scanf("%i", &num);
    printf("\nO dobro deste numero e:\t %i", DOBRO(num));

    printf("\n\n");
    return 0;
}
