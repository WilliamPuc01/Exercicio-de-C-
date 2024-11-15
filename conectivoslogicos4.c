#include <stdio.h>
#include <stdlib.h>


void main(){

    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);


    if((a % 2 == 0) || (b % 2 == 0) ){

          printf("Algum dos dois eh par");
    }else{
         printf("Alguem nao eh par");
    }

    return 0;
}

