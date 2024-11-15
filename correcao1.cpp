#include <stdio.h>
#include <stdlib.h>

int main(){
int vetorx[100];
int vetory[100];
int vetorz[100];
int n, i;
int cont_maiores = 0;
int cont_menores = 0;

printf("Digite o tamanho do vetor de 0 a 100: ");
scanf("%d", &n);

while(n> 100){
    printf("Por favor digite outro valor: ");
    scanf("%d", &n);
}
for( i = 0; i < n ; i++){
    printf("Atribua o valor: ");
    scanf("%d", &vetorx[i]);
}
for( i = 0; i < n ; i++){
    if( vetorx[i] >= 50){
        vetory[cont_maiores] = vetorx[i];
        cont_maiores++;
    }
    else if( vetorx[i] < 50){
        vetorz[cont_menores] = vetorx[i];
        cont_menores++;
    }
}
for( i = 0; i < n; i++){
    printf("Os valores do vetorx: %d \n", vetorx[i]);
}
printf("\n \n");
for( i = 0; i < cont_maiores; i++){
    printf("Os valores do vetory: %d \n", vetory[i]);
}
printf("\n \n");
for( i = 0; i < cont_menores; i++){
    printf("Os valores do z: %d \n", vetorz[i]);
}
}
