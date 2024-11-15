#include <stdlib.h>
#include <stdio.h>

int main (){
int matriz[5][3];
int i, j;

for( i = 0; i < 5; i++){
    for( j = 0; j < 3; j++){
    printf("Digite o valor:" );
    scanf("%d", &matriz[i][j]);
    }
}
for( i = 0; i < 5; i++){
    for( j = 0; j < 3; j++){
    printf("%4d", matriz[i][j]);
    }
    printf("\n");
}
for( i = 0; i < 3; i++){
    for( j = 0; j < 5; j++){
    printf("%4d", matriz[j][i]);
    }
    printf("\n");
}
}
