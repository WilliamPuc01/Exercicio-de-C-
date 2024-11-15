#include <stdio.h>

#define NUM_PRODUTOS 10

// Estrutura para armazenar as informações de um produto
struct Produto {
    int codigo;
    int quantidade;
    float valor_compra;
    float valor_venda;
};

int main() {
    struct Produto produtos[NUM_PRODUTOS];
    int i, codigo_maior_estoque = 0;
    int maior_estoque = 0, indice_maior_lucro = 0;
    float maior_lucro = 0;

    // Leitura das informações dos produtos
    for (i = 0; i < NUM_PRODUTOS; i++) {
        printf("Produto %d\n", i + 1);
        printf("Codigo do produto (3 digitos): ");
        scanf("%d", &produtos[i].codigo);

        printf("Quantidade em estoque: ");
        scanf("%d", &produtos[i].quantidade);

        printf("Valor de compra: ");
        scanf("%f", &produtos[i].valor_compra);

        printf("Valor de venda: ");
        scanf("%f", &produtos[i].valor_venda);

        // Determina o produto com maior quantidade de estoque
        if (produtos[i].quantidade > maior_estoque) {
            maior_estoque = produtos[i].quantidade;
            codigo_maior_estoque = produtos[i].codigo;
        }

        // Calcula o lucro atual e verifica se é o maior
        float lucro_atual = produtos[i].valor_venda - produtos[i].valor_compra;
        if (lucro_atual > maior_lucro) {
            maior_lucro = lucro_atual;
            indice_maior_lucro = i;
        }
    }

    // Exibição dos resultados
    printf("\nCodigo do produto com maior quantidade em estoque: %d\n", codigo_maior_estoque);
    printf("Quantidade do produto que proporciona o maior lucro: %d\n", produtos[indice_maior_lucro].quantidade);

    return 0;
}
