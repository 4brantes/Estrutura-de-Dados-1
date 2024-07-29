#include <stdio.h>
#include<stdlib.h> 

typedef struct aluno{
    int matricula;
    int idade;
    char nome[20];
}Aluno;

void preencher(Aluno * aluno){
    printf("Insira o nome do aluno:\t");
    scanf("%[^\n]", aluno->nome);
    printf("informe a matricula:\t");
    scanf("%d", &aluno->matricula);
    printf("informe a idade:\t");
    scanf("%d",&aluno->idade);
    }

void imprime(Aluno* aluno){
    printf("os nomes cadastrados foram:\n");
    printf("Nome: %S/n", aluno->nome);
    printf("Matricula: %d\n", aluno->matricula);
    printf("Idade: %s\n", aluno->idade);
}