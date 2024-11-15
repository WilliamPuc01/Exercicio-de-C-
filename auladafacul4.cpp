#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>

int main(){

  int a, b;

  printf("Digite o valor da aresta do cubo: ");
  scanf("%d", &a);

  b = pow(a, 3);

  printf("O valor do volume do cubo eh %d", b);

  return 0;

}
