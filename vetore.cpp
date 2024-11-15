#include <stdio.h>

int main() {
    int N;
    float X[20];  // Vetor com tamanho m�ximo de 20
    float soma = 0.0;

    // L� o valor de N
    printf("Digite o n�mero de elementos do vetor (at� 20): ");
    scanf("%d", &N);

    // Verifica se N est� no intervalo permitido
    if (N > 20 || N <= 0) {
        printf("N�mero inv�lido! Deve ser entre 1 e 20.\n");
        return 1;
    }

    // Leitura dos elementos do vetor
    for (int i = 0; i < N; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%f", &X[i]);
        soma += X[i];  // Calcula o somat�rio
    }

    // Imprime o vetor lido
    printf("Vetor lido: ");
    for (int i = 0; i < N; i++) {
        printf("%.2f ", X[i]);
    }

    // Imprime o somat�rio dos elementos
    printf("\nSomat�rio dos elementos: %.2f\n", soma);

    return 0;
}
