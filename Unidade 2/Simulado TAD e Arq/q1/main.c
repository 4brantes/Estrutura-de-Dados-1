#include <stdio.h>
#include "aluno.h"

int main() {
    const char *nomeArquivo = "alunos.txt";
    
    // Cria um arquivo vazio
    criarArquivoVazio(nomeArquivo);
    
    // Cria alguns alunos
    Aluno aluno1 = criarAluno(123, "Maria", 8.5);
    Aluno aluno2 = criarAluno(456, "João", 7.0);
    
    // Salva os alunos no arquivo
    salvarAlunoEmArquivo(nomeArquivo, aluno1);
    salvarAlunoEmArquivo(nomeArquivo, aluno2);
    
    // Exibe todos os alunos do arquivo
    exibirAlunos(nomeArquivo);
    
    return 0;
}
