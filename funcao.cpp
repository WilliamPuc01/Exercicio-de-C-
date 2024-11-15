#include <stdio.h>
#include <stdlib.h>

float media(float n1, float n2);

int main(){

 float resultado, v1, v2;

 printf("Digite sua primeira nota: ");
 scanf("%f", &v1);
 printf("Digite sua segunda nota: ");
 scanf("%f", &v2);
 resultado = media(v1, v2);

 printf("A media eh %.2f", resultado);

 return 0;

}


float media( float n1, float n2)
{
    float resultado;
    resultado = (n1 + n2)/ 2;
    return(resultado);

}


