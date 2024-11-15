#include <stdio.h>
#include <stdlib.h>

int retornadez(){

    return 10;

}

float retornaquebrado(){

   return 5.5;


}

int main(){

   int a;
   float b;

   a = retornadez();

   printf("%d", a);

   b = retornaquebrado();

   printf("\n %f 2.f", b);




   return 0;

}
