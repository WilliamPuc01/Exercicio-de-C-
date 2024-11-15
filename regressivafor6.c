#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){

     setlocale(LC_ALL,"");

     int i;


     for( i = 10; !(i <= 0); i -= 1){

         printf("%d \n", i);



     }
}
