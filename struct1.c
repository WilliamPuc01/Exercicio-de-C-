#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>



struct aluno{
    char nome [100];
    int matricula;
    float nota;
};

int main(){
struct Aluno alunos[MAX_ALUNOS];
int totalAlunos = 0;
int opcao;

do{
    printf("\n Sistema de Cadastro de Alunos \n");
    printf("1. Cadastrar um novo aluno \n");
    printf("2. Mostrar todos os alunos cadastrados \n");
    printf("3. Buscar um aluno pelo nome \n");
    printf("4. Sair \n");
    getchar();

    switch(opcao){
      case 1:
        cadastrarAluno(alunos, &totalAlunos);
    }
}

}
