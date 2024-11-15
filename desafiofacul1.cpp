#include <stdio.h>
#define N 3
double getDeterminant(double matriz[N][N]) {
    return matriz[0][0] * (matriz[1][1] * matriz[2][2] - matriz[1][2] * matriz[2][1])
         - matriz[0][1] * (matriz[1][0] * matriz[2][2] - matriz[1][2] * matriz[2][0])
         + matriz[0][2] * (matriz[1][0] * matriz[2][1] - matriz[1][1] * matriz[2][0]);
}

void substituir_coluna( double matriz[3][3], double vetor_igualdade[3], int col, double nova_matriz[3][3]){
for( int i = 0; i < N; i++){
    for( int j = 0; j < N; j++){
        if( j == col){
            nova_matriz[i][j] =  vetor_igualdade[i];
        }else{
           nova_matriz[i][j] = matriz[i][j];
        }
    }
}
}

int main(){
double matriz[N][N], vetor_igualdade[N], vetor_solucao[N];
double matriz_temp[N][N];
double det_matriz, det_coluna[N];

for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
        printf("M[%d][%d]: ", i,j);
        scanf("%lf", &matriz[i][j]);
    }
}


for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
        printf("[%.2lf]   ", matriz[i][j]);
    }
    printf("\n");
}


printf("Digite o vetor igualdade (lado direito das equacoes):\n");
for (int i = 0; i < N; i++) {
   scanf("%lf", &vetor_igualdade[i]);
}


det_matriz = determinante(matriz);


if (det_matriz == 0) {
  printf("O sistema não tem solucao unica (determinante = 0).\n");
  return 1;
}

for (int i = 0; i < N; i++) {
    substituir_coluna(matriz, vetor_igualdade, i, matriz_temp);
    det_coluna[i] = determinante(matriz_temp);
    }




for (int i = 0; i < N; i++) {
    vetor_solucao[i] = det_coluna[i] / det_matriz;
}




printf("Determinante da matriz: %.2lf\n", det_matriz);
printf("Solucoes do sistema:\n");
for (int i = 0; i < N; i++) {
    printf("x%d = %.2lf\n", i+1, vetor_solucao[i]);
}

return 0;

}

