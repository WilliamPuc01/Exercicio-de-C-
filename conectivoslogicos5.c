#include <stdio.h>
#include <stdlib.h>


void main(){

    int a, b, soma;

    scanf("%d", &a);
    scanf("%d", &b);

    soma = a + b;

    if( soma > 0 && soma < 10){

          printf("  Acesso permetido: %d", soma);
    }else if( soma % 2 == 0){
         printf("Acesso permitido: %d", soma);
    }else{
       printf("Acesso negado");
    }

    return 0;
}

