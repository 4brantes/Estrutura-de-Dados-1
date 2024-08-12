
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aluno.h"

// Função para criar um novo aluno
Aluno criarAluno(int matricula, const char *nome, float media) {
    Aluno aluno;
    aluno.matricula = matricula;
    strncpy(aluno.nome, nome, sizeof(aluno.nome) - 1);
    aluno.nome[sizeof(aluno.nome) - 1] = '\0'; // Garante o fim da string
    aluno.media = media;
    return aluno;
}

// Função para salvar um aluno em um arquivo
void salvarAlunoEmArquivo(const char *nomeArquivo, Aluno aluno) {
    FILE *arquivo = fopen(nomeArquivo, "a");
    if (arquivo == NULL) {
        perror("Não foi possível abrir o arquivo");
        return;
    }
    fprintf(arquivo, "%d;%s;%.2f\n", aluno.matricula, aluno.nome, aluno.media);
    fclose(arquivo);
}

// Função para exibir todos os alunos armazenados em um arquivo
void exibirAlunos(const char *nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        perror("Não foi possível abrir o arquivo");
        return;
    }
    
    Aluno aluno;
    while (fscanf(arquivo, "%d;%99[^;];%f\n", &aluno.matricula, aluno.nome, &aluno.media) != EOF) {
        printf("Matricula: %d\n", aluno.matricula);
        printf("Nome: %s\n", aluno.nome);
        printf("Media: %.2f\n\n", aluno.media);
    }
    
    fclose(arquivo);
}

// Função para criar um arquivo vazio, se não existir
void criarArquivoVazio(const char *nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "w");
    if (arquivo == NULL) {
        perror("Não foi possível criar o arquivo");
        return;
    }
    fclose(arquivo);
}
