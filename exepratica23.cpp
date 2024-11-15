#include <stdio.h>
#include <stdlib.h>
#define NUM_PRODUTOS 10


struct produto{
int codigo;
int quantidade;
float valor_compra;
float valor_venda;
};

int main(){
int i, cod_maior_est = 0;
int quant_max = 0;
int valor_max = 0;
int indici_maior = 0;

int produto produtos[NUM_PRODUTOS];


for( i = 0; i < NUM_PRODUTOS; i++){
    printf("Produto %d", i + 1);
    printf("Digite o codigo de produto (3 digitos): ");
    scanf("%d", &produtos[i].codigo);

    printf("Digite a quantidade em estoque: ");
    scanf("%d", &produtos[i].quantidade);

    printf("Digite o valor de compra: ");
    scanf("%f", &produtos[i].valor_compra);

    printf("Digite o valor de venda: ");
    scanf("%f", &produtos[i].valor_venda);



    if(pordutos[i]. quantidade > quant_max){
        quant_max = produtos[i].quantidade;
        cod_maior_est = produtos[i].codigo;
    }
    float lucro_atual = produtos[i].valor_venda - produtos[i].valor_compra;
    if(lucro_atual > )
}






}
