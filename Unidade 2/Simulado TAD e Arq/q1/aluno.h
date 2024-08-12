#ifndef ALUNO_H
#define ALUNO_H

typedef struct {
    int matricula;
    char nome[100];
    float media;
} Aluno;

// Funções para manipular alunos
Aluno criarAluno(int matricula, const char *nome, float media);
void salvarAlunoEmArquivo(const char *nomeArquivo, Aluno aluno);
void exibirAlunos(const char *nomeArquivo);
void criarArquivoVazio(const char *nomeArquivo);

#endif // ALUNO_H
