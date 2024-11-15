#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char palavra[10];
    char caracters[10];
    int contador = 0;

    // Lê a palavra
    printf("Digite uma palavra: ");
    fgets(palavra, 10, stdin);


    // Percorre a string até o final (enquanto não encontra o '\0')
    for (int i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] == 'a') {

            caracters[contador] = palavra[i];
            contador++;
        }
    }

    // Exibe o resultado
    printf("A palavra: %s\n", palavra);
    printf("A palavra: %s\n", caracters);
    printf("Quantidade: %d\n", contador);

    return 0;
}
