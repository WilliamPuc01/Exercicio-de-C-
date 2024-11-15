#include <stdio.h>
#include <stdlib.h>

void main(){

    int n1, n2, resultado;

    scanf("%d", &n1);

    scanf("%d", &n2);


    resultado = n1 + n2;


    if(resultado > 9){

        printf("Maior que 10\n");
        printf("%d", resultado);

    }else{

        printf("Menor que 10\n");
        printf("%d", resultado);
    }

    return 0;
}
