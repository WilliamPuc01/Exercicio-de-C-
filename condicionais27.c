#include <stdio.h>
#include <stdlib.h>


void main(){

    int n1, n2;


    scanf("%d", &n1);
    scanf("%d", &n2);


    if(n1 > n2){

        printf("Esse numero eh maior %d", n1);

    }else if( n1 == n2){

        printf("Os dois sao iguais");
    }else{

       printf("Esse numero eh maior %d", n2);

    }


    return 0;
}
