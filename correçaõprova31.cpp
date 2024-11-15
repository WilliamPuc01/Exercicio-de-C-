#include <stdio.h>
#include <stdlib.h>


struct vetor{
int num[100];
};


void adicionar(struct vetor f[], int *pos){
   printf("Adiciona um numero: ");
   scanf("%d", &f[*pos].num);
   (*pos)++;
}
void printV(struct vetor f){
     printf("%d", f.num);

}



void printVetor(struct vetor f[], int sz){
    for(int i =0; i <sz; i++){
        printV(f[i]);
    }
}


int main(){
struct vetor TamVe[100];
int opc = 0;
int qtd = 0;

do{
    printf("Digite uma opcao: ");
    scanf("%d", &opc);

    switch(opc){
      case 1:{
        adicionar(TamVe, &qtd);
        break;
      }

      case 3:{
        printVetor(TamVe, qtd);
        break;
      }

    }
}while(opc != 4);
printf("%d", qtd);


return 0;




}
