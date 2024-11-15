#include <stdio.h>
#include <stdlib.h>

int main(){
    int x ;
    int vetorA[15];
    int i;

    printf("Digite o tamanho do vetor: ");

    scanf("%d", &x);
    for(x ; x >16 ; x++){

     printf("Valor Invalido, digite outro");
      scanf("%d", &x);
    }

    for( i = 0; i < x; i++){
        printf("\n Digite o valor do Vetor: ");
        scanf("%d", &vetorA[i]);

    }
    for(i = 0; i < x; i++){
        printf("vetorA[%d] \n", vetorA[i]);
    }
}
