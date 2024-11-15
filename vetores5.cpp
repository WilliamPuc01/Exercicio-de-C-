#include <stdlib.h>
#include <stdio.h>

int main(){

int vetorx[10];
int i;
int maior = -9999999
, menor = 99999999;

for( i = 0; i < 10; i++){
    printf("Atribua o valor no vetor: ");
    scanf("%d", &vetorx[i]);
    printf("\n");
}
maior = vetorx[0];
for( i = 1; i < 10; i++){
    if(vetorx[i] > maior){
        maior = vetorx[i];
    }
}
menor = vetorx[0];
for( i = 1; i < 10; i++){
    if(vetorx[i] < menor){
        menor = vetorx[i];
    }
}
printf("%d \n", maior);
printf("%d", menor);

return 0;
}
