#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){

      setlocale(LC_ALL, "");


      int i;
      int media[3];
      int resultado;


      for(i = 0; i < 3; i++){

           printf("Digite o valor: ");
           scanf("%d", &media[i]);
    }

    printf("\n \n");


    resultado = (media[0] + media[1] + media[2])/ 3;

    printf("A média dos valores é :%d", resultado);


    //for(i = 0; i < 3; i++){

           //printf("A média é: %d \n", media[i]);
   // }


     return 0;

}
