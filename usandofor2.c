#include <stdio.h>
#include <stdlib.h>

void main(){

   int i, f, p;

   printf("Digite um valor inicial: ");
   scanf("%d", &i);
   printf("\nDigite um valor final: ");
   scanf("%d", &f);
   printf("\nDigite o valor dos passos: ");
   scanf("%d", &p);

   for( i; i <= f; i += p){

    printf("%d e %d \n", i, f);



   }


}
