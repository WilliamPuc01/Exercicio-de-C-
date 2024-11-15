#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No* esquerda;
    struct No* direita;
} No;

No* criarNo(int valor) {
    No* novoNo = (No*)malloc(sizeof(No));
    novoNo->valor = valor;
    novoNo->esquerda = NULL;
    novoNo->direita = NULL;
    return novoNo;
}

No* inserir(No* raiz, int valor) {
    if (raiz == NULL) {
        return criarNo(valor); // Cria um novo nó se a posição estiver vazia
    }

    if (valor < raiz->valor) {
        raiz->esquerda = inserir(raiz->esquerda, valor); // Insere na subárvore esquerda
    } else if (valor > raiz->valor) {
        raiz->direita = inserir(raiz->direita, valor); // Insere na subárvore direita
    }

    return raiz; // Retorna a raiz inalterada se o valor já existir ou após a inserção
}

void percorrimentoPreOrdem(No* raiz) {
    if (raiz != NULL) {
        printf("%d ", raiz->valor);  // Imprime o valor do nó atual
        percorrimentoPreOrdem(raiz->esquerda);  // Visita a subárvore esquerda
        percorrimentoPreOrdem(raiz->direita);  // Visita a subárvore direita
    }
}

int main() {
    No* raiz = NULL;

    // Inserindo valores na árvore
    raiz = inserir(raiz, 11);
    raiz = inserir(raiz, 2);
    raiz = inserir(raiz, 5);
    raiz = inserir(raiz, 3);
    raiz = inserir(raiz, 8);

    printf("Nodos da árvore em pré-ordem: ");
    percorrimentoPreOrdem(raiz);  // Chama a função para percorrer e imprimir a árvore
    printf("\n");

    return 0;
}
