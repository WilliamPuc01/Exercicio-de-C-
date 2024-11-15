#include <stdlib.h>
#include <stdio.h>

int main(){

int vetorx[15];
int i;
int par, mult;

for( i = 0; i < 15; i++){
    printf("Digite um valor: ");
    scanf("%d", &vetorx[i]);
}
for( i = 0; i < 15; i++){
    if(vetorx[i] % 2 == 0){
        printf("Os valores par: %d \n", vetorx[i]);
    }

}
for( i = 0; i < 15; i++){
    if(vetorx[i] % 5 == 0){
        printf("Os valores multiplos de 5: %d \n", vetorx[i]);
    }

}

}
