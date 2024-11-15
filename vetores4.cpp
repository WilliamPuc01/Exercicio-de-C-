#include <stdlib.h>
#include <stdio.h>

int main(){

int vetorx[20];
int N;
int i;

printf("Digite o tamanho de vetor no maximo 20: ");
scanf("%d", &N);

while(N > 20){
    printf("Por favor, digite outro valor: ");
    scanf("%d", &N);
}

for(i = 0; i < N; i++){
    printf("Atribua valor no vetor: ");
    scanf("%d", &vetorx[i]);
}
for(i = 0; i < N; i++){
    printf("Os valores atribuidos: %d \n", vetorx[i]);

}
for(i = N - 1; i >= 0; i--){
    printf("Os valores inverso: %d \n", vetorx[i]);

}
return 0;
}
