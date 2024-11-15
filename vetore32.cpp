#include <stdio.h>
#include <stdlib.h>

int main (){

 int x;
 int vetorX[20];
 int vetorY[20];
 int vetorZ[20];
 int i;

  printf("Digite o tamanho do seu vetorX e Y: ");
  scanf("%d", &x);

  for(i = 0; i < x; i++){
     scanf("%d", &vetorX[i]);
}
  printf("Atribua o valor de vetorY: ");
  for(i = 0; i < x; i++){
     scanf("%d", &vetorY[i]);
}
  for(i = 0; i < x; i++){
     vetorZ[i] = vetorX[i] * vetorY[i];
}
 for(i = 0; i < x; i++){
     printf( "Os valores de vetorZ eh %d \n", vetorZ[i]);
}


}
