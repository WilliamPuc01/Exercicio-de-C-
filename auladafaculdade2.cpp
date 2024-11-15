#include <stdio.h>
#include <stdlib.h>
#include <iostream>


int main(){

    float a;
    float b;
    float c;



    printf("Digite o valor da altura: ");
    scanf("%f", &a);
    printf("Digite o valor da base: ");
    scanf("%f", &b);

    c = (b * a)/2.;

    printf("A area do triangulo eh %.2f", c);

  return 0;

}
