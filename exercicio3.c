#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    int valor1, valor2, valor3, resultado;

    setlocale(LC_ALL, "");

    printf("Digite um valor inteiro:");
    scanf("%d", &valor1);
    printf("Digite um outro valor inteiro:");
    scanf("%d", &valor2);
    printf("Digite o ultimo valor inteiro:");
    scanf("%d", &valor3);

    resultado = valor1 * valor2 * valor3;

    printf("O resultado é = %d", resultado);

}
