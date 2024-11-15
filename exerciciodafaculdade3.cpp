#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(){


  float a, b, c, d;


  printf("Digite o valor do seu salario: ");
  scanf("%f", &a);
  printf("Digite o valor do percentual: ");
  scanf("%f", &b);
  c = a * (b/100);
  d = a + c;

  printf("O valor do percentual eh %2.f e o valor do reajuste eh %2.f", b, d);

  return 0;

}
