#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(){
int a, b;
int resultado;
printf("Digite a primeira nota: ");
scanf("%d", &a);
printf("Digite a segunda nota: ");
scanf("%d", &b);

resultado = (a+b)/ 2;

if( resultado == 10){
    printf("Aprovado com Distincao");
}else if( resultado >= 7){
  printf("Aprovado");
}else{
  printf("Reprovado");
}
}
