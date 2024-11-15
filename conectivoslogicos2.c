#include <stdio.h>
#include <stdlib.h>


void main(){

    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a > 10 && b > 10 && c > 10){

          printf("Maior que 10");
    }else{
         printf("Um dos valores nao eh maior que 10");
    }

    return 0;
}
