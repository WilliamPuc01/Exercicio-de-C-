#include <stdio.h>
#include <string.h>

int main() {
    char caractere, string[21];  // 21 para incluir o caractere nulo '\0'
    int contador = 0;

    // Lendo o caractere
    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    // Lendo a string (máximo de 20 caracteres)
    printf("Digite uma string (máximo 20 caracteres): ");
    scanf("%s", string);

    // Calculando quantas vezes o caractere aparece na string
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == caractere) {
            contador++;
        }
    }

    // Exibindo o resultado
    printf("O caractere '%c' aparece %d vezes na string \"%s\".\n", caractere, contador, string);

    return 0;
}
