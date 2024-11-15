#include <stdio.h>

int main(){
  int original, num, valor, res = 0;
  scanf("%d", &original);
  num=original;
  while(num>0){
    valor = num % 10;
    res+=valor;
    num/=10;
  }
  printf("\n\n\t Numero = %d Resultado = %d", original, res);
  return 0;



}
