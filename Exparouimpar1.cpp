#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(){

int a ;

printf("Digite um numero: ");
scanf("%d", &a);

if(a % 2 == 0){

 printf("O numero eh par %d", a);
}else{
   printf("O numero eh impar %d", a);
}

}
