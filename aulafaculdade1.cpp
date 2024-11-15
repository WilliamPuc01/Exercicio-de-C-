#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(){

  int a;
  int b;
  int c;

  printf("Digite um numero inteiro: ");
  scanf("%d", &a);

  b = a + 1;
  c = a - 1;

  printf("O sucessor de %d eh %d e o antecessor eh %d", a, b, c);

   return 0;


}
