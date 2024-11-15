#include <stdio.h>

#define N 3

// Função para calcular o determinante de uma matriz 3x3
double determinante(double matriz[N][N]) {
    return matriz[0][0] * (matriz[1][1] * matriz[2][2] - matriz[1][2] * matriz[2][1])
         - matriz[0][1] * (matriz[1][0] * matriz[2][2] - matriz[1][2] * matriz[2][0])
         + matriz[0][2] * (matriz[1][0] * matriz[2][1] - matriz[1][1] * matriz[2][0]);
}

// Função para substituir a coluna i da matriz pelo vetor igualdade
void substituir_coluna(double matriz[N][N], double vetor_igualdade[N], int col, double nova_matriz[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j == col) {
                nova_matriz[i][j] = vetor_igualdade[i]; // Substitui a coluna j pelo vetor igualdade
            } else {
                nova_matriz[i][j] = matriz[i][j]; // Copia o restante da matriz
            }
        }
    }
}

int main() {
    double matriz[N][N], vetor_igualdade[N], vetor_solucao[N];
    double matriz_temp[N][N];
    double det_matriz, det_coluna[N];

    // Entrada dos coeficientes da matriz 3x3
    printf("Digite os coeficientes da matriz 3x3 (linha por linha):\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%lf", &matriz[i][j]);
        }
    }

    // Entrada do vetor igualdade
    printf("Digite o vetor igualdade (lado direito das equações):\n");
    for (int i = 0; i < N; i++) {
        scanf("%lf", &vetor_igualdade[i]);
    }

    // Cálculo do determinante da matriz original
    det_matriz = determinante(matriz);

    if (det_matriz == 0) {
        printf("O sistema não tem solução única (determinante = 0).\n");
        return 1;
    }

    // Cálculo dos determinantes das matrizes com substituição das colunas (usando Regra de Cramer)
    for (int i = 0; i < N; i++) {
        substituir_coluna(matriz, vetor_igualdade, i, matriz_temp);
        det_coluna[i] = determinante(matriz_temp);
    }

    // Cálculo das soluções do sistema
    for (int i = 0; i < N; i++) {
        vetor_solucao[i] = det_coluna[i] / det_matriz;
    }

    // Exibindo o determinante da matriz original e as soluções
    printf("Determinante da matriz: %.2lf\n", det_matriz);
    printf("Soluções do sistema:\n");
    for (int i = 0; i < N; i++) {
        printf("x%d = %.2lf\n", i+1, vetor_solucao[i]);
    }

    return 0;
}

