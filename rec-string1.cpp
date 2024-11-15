#include <stdio.h>
#include <string.h>

int main() {
    // Define o n�mero de cidades e o tamanho m�ximo de cada nome de cidade
    int numCidades = 5;
    int maxTamanhoNome = 50; // tamanho m�ximo para o nome de cada cidade

    // Declara um array para guardar os nomes das cidades
    char cidades[numCidades][maxTamanhoNome];

    // Loop para capturar os nomes das cidades digitados pelo usu�rio
    for (int i = 0; i < numCidades; i++) {
        printf("Digite o nome da cidade %d: ", i + 1);
        // L� a entrada do usu�rio e armazena no array
        fgets(cidades[i], maxTamanhoNome, stdin);

        // Remove o caractere de nova linha '\n' que fgets captura
        cidades[i][strcspn(cidades[i], "\n")] = '\0';
    }

    // Exibe os nomes das cidades
    printf("\nCidades digitadas:\n");
    for (int i = 0; i < numCidades; i++) {
        printf("Cidade %d: %s\n", i + 1, cidades[i]);
    }

    return 0;
}
