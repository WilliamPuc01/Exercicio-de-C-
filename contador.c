#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){

     setlocale(LC_ALL,"");

     int contador = 10;


     do{

        contador -= 1;

        printf("%d \n", contador);
        } while( !(contador <= 0));
}
