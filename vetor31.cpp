#include <stdlib.h>
#include <stdio.h>


int main(){

int vetorx[20];
int N;
int i;
int soma[20];

printf("Digite o tamanho do vetor no maximo 20: ");
scanf("%d", &N);

while(N > 20){
    printf("\nPor favor, digite outro valor: ");
    scanf("%d", &N);
}

for(i = 0; i < N; i++){
    printf("Atribua o valor no vetor: ");
    scanf("%d", &vetorx[i]);

}
for(i = 0; i < N; i++){
    printf("Os valores colocados: %d \n", vetorx[i]);
    soma[i] = vetorx[i] + vetorx[i];
}
for(i = 0; i < N; i++){
    printf("Os valores somados: %d \n", soma[i]);
}
return 0;
}
