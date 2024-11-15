#include <stdio.h>
#include <stdlib.h>


void mostraSoma(int primeiroValor, int segundoValor){
     printf("\n A soma entre %d e %d eh %d", primeiroValor, segundoValor, primeiroValor + segundoValor);
}


int main(){

   int a = 5, b = 7;

   mostraSoma(a,b);


   return 0;


}
