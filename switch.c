#include <stdio.h>
#include <stdlib.h>

void main(){

      int d, e, soma, subtracao, opcao;

      printf("Digite um numero: \n");
      scanf("%d", &d);
      printf("\nDigite um numero: \n");
      scanf("%d", &e);

      printf("Escolha quais das opcoes");
      printf("\n 1 - somar");
      printf("\n 2 - subtrair \n");

      scanf("%d", &opcao);



      soma = d + e;
      subtracao = d - e;



       switch(opcao){

               case 1:
                    printf("A soma deu: %d ", soma);
                    break;

               case 2:
                   printf("A subtracao deu: %d ", subtracao);
                   break;
               default:
                    printf("Nenhuma das opcoes");
                    break;
}


}
