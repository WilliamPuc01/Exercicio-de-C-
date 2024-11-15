#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){

    srand(time(NULL));

    int maximo = 6;
    int minimo = 1;


    int a = (rand() % (maximo - minimo + 1)) + minimo;
    int b = (rand() % (maximo - minimo + 1)) + minimo;
    int c = (rand() % (maximo - minimo + 1)) + minimo;

    int soma;

    soma = a + b + c;

    printf("%d + %d + %d = %d", a, b, c, soma);





}
