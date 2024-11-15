#include <stdio.h>
#include <stdlib.h>

void main(){

     int a = 0;
     int b = 0;

     while(!( a > 5 && a < 10) || !(b > 5 && b < 10)){

        printf("Digite os numeros entre 5 e 10.\n ");


        printf("Digite um valor para a: ");
        scanf("%d", &a);


        printf("Digite um valor para b: ");
        scanf("%d ", &b);


     }

    printf("soma: %d", a + b);
    return 0;
}
