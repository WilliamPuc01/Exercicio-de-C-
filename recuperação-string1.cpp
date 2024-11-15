#include <stdio.h>
#include <string.h>

int main() {
    char str[6]; // Espaço para 5 caracteres + o caractere nulo '\0'
    char invertida[6]; // Para armazenar a string invertida

    // Lê a string de 5 caracteres
    printf("Digite uma string de 5 caracteres: ");
    scanf("%5s", str);

    // Inverte a string
    int tamanho = strlen(str);
    for (int i = 0; i < tamanho; i++) {
        invertida[i] = str[tamanho - 1 - i];
    }
    invertida[tamanho] = '\0'; // Adiciona o caractere nulo no final

    // Imprime a string original e a invertida
    printf("String original: %s\n", str);
    printf("String invertida: %s\n", invertida);

    return 0;
}
