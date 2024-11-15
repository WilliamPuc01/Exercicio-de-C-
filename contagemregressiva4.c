#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){

     setlocale(LC_ALL,"");



     int i = 10;


     while( !(i <= 0)){

           i -= 1;

           printf("%d \n", i);



     }

}
