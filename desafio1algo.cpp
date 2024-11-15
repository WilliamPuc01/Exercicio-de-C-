#include <stdio.h>
#include <stdlib.h>
#define NUM 10

struct cadastro{
int cod_prod;
int quantidade;
float v_compra;
float v_venda;

};

int main(){
int i, indice_maior;
int maior = 0;
int cod_maior;
float lucro;
float maior_lucro = 0;
struct cadastro produto[3];

for( i = 0; i < 3; i++){
    printf("\nDigite o codigo do produto(3 digitos): ");
    scanf("%d", &produto[i].cod_prod);

    printf("\nDigite a quantidade do estoque: ");
    scanf("%d", &produto[i].quantidade);

    printf("\nDigite o valor da compra: ");
    scanf("%d", &produto[i].v_compra);

    printf("\nDigite o valor da venda: ");
    scanf("%d", &produto[i].v_venda);


    if(maior < produto[i].quantidade){
        maior = produto[i].quantidade;
        cod_maior = produto[i].cod_prod;
    }

    lucro = produto[i].v_venda - produto[i].v_compra;

    if(maior_lucro < lucro){
        maior_lucro = lucro;
        indice_maior = i;

    }
}

printf("O maior numero de estoque %d \n O codigo %d", maior, cod_maior);
printf("\n O maior lucro %d", produto[indice_maior].quantidade);

}
