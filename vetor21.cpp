#include <stdio.h>
#include <stdlib.h>

int main(){

int vetorx[20];
int N;
int k;
int i;
int multi;


printf("Digite o tamanho do seu vetor no maximo 20:  ");
scanf("%d", &N);
while(N > 20){
    printf("Digite outro valor: ");
    scanf("%d", &N);
}

for( i = 0; i < N; i++){
    printf("Digite um valor: ");
    scanf("%d", & vetorx[i]);

}
for( i = 0; i < N; i++){
    printf("Os valores do vetor eh %d \n", vetorx[i]);

}
 printf("Digite o valor de k, para multiplicar o vetor: ");
 scanf("%d", &k);
for( i = 0; i < N; i++){
    multi = vetorx[i] * k;
    printf("O valor multiplicado: %d \n", multi);

}
return 0;

}
