#include <stdio.h>
#include <stdlib.h>


void main(){

    int i = 10;
    int maximo;


    printf("Digite um valor maximo: ");
    scanf("%d", &maximo);

    while( i <= maximo){


        if(i % 2 == 0){


        printf("%d \n", i);

        }

        i += 1;
    }
    return 0;
}

