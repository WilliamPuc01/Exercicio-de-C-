#include <stdio.h>
#define N 3

void GetDeterminant(double matriz[N][N]){
    return matriz[0][0] * (matriz[1][1] * matriz[2][2] - matriz[1][2] * matriz[2][1])
         - matriz[0][1] * (matriz[1][0] * matriz[2][2] - matriz[1][2] * matriz[2][0])
         + matriz[0][2] * (matriz[1][0] * matriz[2][1] - matriz[1][1] * matriz[2][0]);
}
void GetAdj(double matriz[N][N], double adj[N][N]){
    int i,j;
    double adjaux[N][N] = {(matriz[1][1] * matriz[2][2] - matriz[1][2] * matriz[2][1]), (matriz[0][2] * matriz[2][1] matriz[0][1] * matriz[2][2]), (matriz[0][1] * matriz[1][2] - matriz[0][2] * matriz[1][1]),
           (matriz[1][2] * matriz[2][0] - matriz[1][0] * matriz[2][2]), (matriz[0][0] * matriz[2][2] - matriz[0][2] * matriz[2][0]), (matriz[0][2] * matriz[1][0] - matriz[0][0] * matriz[1][2]),
           (matriz[1][0] * matriz[2][1] - matriz[1][1] * matriz[2][0]), (matriz[0][1] * matriz[2][0] - matriz[0][0] * matriz[2][1]), (matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0])};

    for(i = 0; i < N; i++){
        for( j = 0; j < N; j++){
            adj[i][j] = adjaux[i][j];
        }
    }
}

void multiply( double inv[])


void getInv( double matriz[3][3], double vetor_igualdade[3], int col, double nova_matriz[3][3]){
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
