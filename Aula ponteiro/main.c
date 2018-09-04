#include <stdio.h>
#include <stdlib.h>
void fun (int *a){
printf("\n new %d", *a);
*a=3;
}
void fun2 (float *b){
printf("\n new %.1f", *b);
*b= 2.6;
}
void fun3 (char *c){
printf("\n new %c", *c);
*c= 'f';
}
int main()
{
    int x= 2; float y= 2.5 ; char z= 'x';
    fun(&x);
    printf("\n old %d", x);
    fun2(&y);
    printf("\n old %.1f", y);
    fun3(&z);
    printf("\n old %c", z);


    return 0;
}
