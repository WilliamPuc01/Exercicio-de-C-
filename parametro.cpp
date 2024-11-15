#include <stdio.h>
#include <stdlib.h>


void mostraSucessor(int numero){

       printf("\n O sucessor de %d eh %d", numero, numero + 1);
}

int retornaAntecessor(int numero){
    return numero - 1;
}

int main(){

   int a;


   printf("Digite um valor:");

   scanf("%d", &a);

   mostraSucessor(a);

   printf("\n O antecessor de %d eh %d", a, retornaAntecessor(a));

   return 0;

}
