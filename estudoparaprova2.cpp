#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno{
char nome[100];
int matricula;
float nota;
};

struct aluno alunos[100];
int total = 0;


void cadastrarAlunos(){
    if(total >= 100){
        printf("Limite de alunos cadastrados! \n");
        return;
    }
    struct aluno novoAluno;

    printf("Nome do Aluno: ");
    scanf("%s", &novoAluno.nome);

    printf("Matricula: ");
    scanf("%d", &novoAluno.matricula);

    printf("Nota: ");
    scanf("%f", &novoAluno.nota);

    alunos[total] = novoAluno;
    total++;

    printf("Aluno cadastrado com sucesso! \n");
}

void mostrar_aluno( ){
    if(total == 0){
        printf("Nenhum Aluno Cadastrados.");
        return;
    }
    printf("Alunos cadastrados: \n");
    for(int i = 0; i < total; i++){
        printf("Nome: %s \n",alunos[i].nome);
        printf("Matricula: %d \n",alunos[i].matricula);
        printf("Nota: %f \n",alunos[i].nota);
    }
}

int main() {
    int opcao;

    do {
        printf("\n---- Sistema de Cadastro de Alunos ----\n");
        printf("1. Cadastrar aluno\n");
        printf("2. Listar alunos\n");
        printf("3. Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarAlunos();
                break;
            case 2:
                 mostrar_aluno();
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}
