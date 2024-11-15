#define N 2
#include <stdio.h>
int main(){
  int m[N][N];
  int i, j;
  int maior = -99999999, menor = 9999999;
  int linhamaior = 0;
  int colunamaior = 0;
  int linhamenor = 0;
  int colunamenor = 0;

 for( i = 0; i < N; i++){
   for( j = 0; j < N; j++){
        printf("Digite o valor da matriz m[%d][%d]: ",i, j);
         scanf("%d", &m[i][j]);
}
}
 for( i = 0; i < N; i++){
     for( j = 0; j < N; j++){
        printf("Os valores da matriz m[%d][%d]: %d  \n", i, j, m[i][j]);


}
 }
 for( i = 0; i < N; i++){
     for( j = 0; j < N; j++){
        if(m[i][j] > maior){
            maior = m[i][j];
            linhamaior = i;
            colunamaior = j;
        }else if(m[i][j] < menor){
            menor = m[i][j];
            linhamenor = i;
            colunamenor = j;
        }
     }
 }
printf("O maior valor da matriz eh m[%d][%d] = %d", linhamaior, colunamaior, maior);


 return 0;
}





