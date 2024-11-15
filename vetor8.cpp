#include <stdlib.h>
#include <stdio.h>

int main(){

int vetorA[10];
int i;
int soma = 0;
int media;
for( i = 0; i < 10; i++){
    printf("Digite a idade: ");
    scanf("%d", &vetorA[i]);
}
for( i = 0; i < 10; i++){
   soma += vetorA[i];
}
media = soma/ 10;
printf("A media eh %d \n", media);

for(i = 0; i <10; i++){
    if(vetorA[i] < media){
        printf("Abaixo da media eh: %d \n", vetorA[i]);
    }
}
}
