#include <stdio.h>
#include <stdlib.h>


struct Func {
    int id;
    char nome[50];
    float salario;
    int idade;
};


void PrintFunc(struct Func f){
   printf("\nNome: %s", f.nome);
   printf("\nID: %d", f.id);
   printf("\nSalario: %2.f", f.salario);
   printf("\nIdade: %d", f.idade);
}


void cadastrar(struct Func f[], int *pos){
  printf("\n Nome: ");
  scanf("%s", &f[*pos].nome);
  printf("\nId: ");
  scanf("%d", &f[*pos].id);
  printf("\nSalario: ");
  scanf("%f", &f[*pos].salario);
  printf("\nidade: ");
  scanf("%d", &f[*pos].idade);
  (*pos)++;
}

void PrintFuncVec(struct Func f[], int sz){

    for(int i = 0; i < sz; i++){
        PrintFunc(f[i]);
    }
}

void AumentaSalario( struct Func f[], int sz, int id, float percent){
   for( int i = 0; i < sz; i++){
    if(f[i].id == id){
        f[i].salario *= (1 +percent/100);
        break;
    }
   }
}

void maiorSalario(struct Func f[], int sz, float val){
  for(int i = 0; i < sz; i++){

    if(f[i].salario > val){
        PrintFunc(f[i]);
    }

  }


}void media(struct Func f[], int sz){
   float soma = 0;
   for(int i = 0; i < sz; i++){
     soma += f[i].salario;
   }
   int todos = sz;
   float total = soma/todos;
   printf("%2.f", total);


}

int main(){
struct Func funcVec[100];
int qtd = 0;
int opc = 0;


do{

    printf("Digita opcao desejada: ");
    scanf("%d", &opc);

    switch(opc) {



        case 1:
            {

            cadastrar(funcVec, &qtd);
            break;}
        case 2:{
             PrintFuncVec(funcVec, qtd);
             break;
        }
        case 3:{
              int id;
              float perc;
              printf("Digite o id e o percentual de aumento: ");
              scanf("%d", &id);
              scanf("\n %f", &perc);
              AumentaSalario(funcVec, qtd, id, perc);
              break;
        }
        case 4:{
            float valor;
            printf("Digite Valor: ");
            scanf("%f", &valor);
            maiorSalario(funcVec, qtd, valor);
            break;
        }
        case 5:{
            media(funcVec, qtd);
            break;
        }
        case 6:{
           printf("Saindo..");
        }
        }

}while( opc != 6 );


return 0;
}
