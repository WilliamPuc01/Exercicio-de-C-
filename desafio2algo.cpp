#include <stdio.h>
#include <stdlib.h>

struct ficha {
int ra;
int codigo_disc;
float nota[2];
float media_final;
};

int main(){
int i;

struct ficha aluno[3];

for( i = 0; i < 3; i++){
    printf("\nDigite o RA: ");
    scanf("%d", &aluno[i].ra);
    printf("\nDigite o codigo da disciplina(4 digitos):");
    scanf("%d", &aluno[i].codigo_disc);
    printf("\nDigite a nota 1: ");
    scanf("%f", &aluno[i].nota[0]);
    printf("\nDigite a nota 2: ");
    scanf("%f", &aluno[i].nota[1]);

    aluno[i].media_final = (aluno[i].nota[0] * 1 + aluno[i].nota[1] * 2) / 3;

}
for( i = 0; i < 3; i++){
    printf("\nO RA do aluno: %d ", aluno[i].ra);
    printf("\nO codigo da disciplina: %d", aluno[i].codigo_disc);
    printf("\nA nota 1: %f", aluno[i].nota[0]);
    printf("\nA nota 2: %f",  aluno[i].nota[1]);
    printf("\nA media final: %f", aluno[i].media_final);


}
return 0;
}
