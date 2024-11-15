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
        return criarNo(valor); // Cria um novo n� se a posi��o estiver vazia
    }

    if (valor < raiz->valor) {
        raiz->esquerda = inserir(raiz->esquerda, valor); // Insere na sub�rvore esquerda
    } else if (valor > raiz->valor) {
        raiz->direita = inserir(raiz->direita, valor); // Insere na sub�rvore direita
    }

    return raiz; // Retorna a raiz inalterada se o valor j� existir ou ap�s a inser��o
}

void percorrimentoPreOrdem(No* raiz) {
    if (raiz != NULL) {
        printf("%d ", raiz->valor);  // Imprime o valor do n� atual
        percorrimentoPreOrdem(raiz->esquerda);  // Visita a sub�rvore esquerda
        percorrimentoPreOrdem(raiz->direita);  // Visita a sub�rvore direita
    }
}

int main() {
    No* raiz = NULL;

    // Inserindo valores na �rvore
    raiz = inserir(raiz, 11);
    raiz = inserir(raiz, 2);
    raiz = inserir(raiz, 5);
    raiz = inserir(raiz, 3);
    raiz = inserir(raiz, 8);

    printf("Nodos da �rvore em pr�-ordem: ");
    percorrimentoPreOrdem(raiz);  // Chama a fun��o para percorrer e imprimir a �rvore
    printf("\n");

    return 0;
}
