#include <stdio.h>
#include <stdlib.h>


void main(){

    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    if(a > 10 || b > 10 ){

          printf("Alguem eh maior que 10");
    }else{
        printf("Nenhum valor e maior que 10");
    }

    return 0;
}

