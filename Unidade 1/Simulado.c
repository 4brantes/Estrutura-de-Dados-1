#include <stdio.h>
#include <stdlib.h>

typedef enum {
    RG,
    CPF,
    PASSAPORTE,
    NUM_SUS
} TipoDocumento;

typedef enum {
    MASCULINO,
    FEMININO,
    OUTRO
} Genero;

typedef union {
    char RG[30];
    char CPF[30];
    char Passaporte[30];
    char NumSus[30];
} Documento;

typedef struct pessoa {
    char nome[80];
    Documento documentos;
    TipoDocumento tipoDocumento;
    int idade;
    Genero genero;
} Pessoa;

void preencha(Pessoa *pessoa) {
    printf("\nInforme o nome:\n");
    scanf(" %[^\n]", pessoa->nome);
    printf("\nEscolha o documento:\n1. RG\n2. CPF\n3. Passaporte\n4. Numero do SUS\n");
    scanf("%d", &pessoa->tipoDocumento);

    switch (pessoa->tipoDocumento) {
        case RG:
            printf("Informe o RG: ");
            scanf(" %s", pessoa->documentos.RG);
            break;
        case CPF:
            printf("Informe o CPF: ");
            scanf(" %s", pessoa->documentos.CPF);
            break;
        case PASSAPORTE:
            printf("Informe o passaporte: ");
            scanf(" %s", pessoa->documentos.Passaporte);
            break;
        case NUM_SUS:
            printf("Informe o numero do SUS: ");
            scanf(" %s", pessoa->documentos.NumSus);
            break;
        default:
            printf("Opcao invalida! Tente novamente.\n");
            break;
    }

    printf("\nInforme a idade: ");
    scanf("%d", &pessoa->idade);

    printf("\nEscolha o genero:\n 1. Masculino\n 2. Feminino\n 3. Outro\n");
    scanf("%d", &pessoa->genero);
}

void imprima(Pessoa *pessoa) {
    printf("==========================================\n");
    printf("Nome: %s\n", pessoa->nome);

    switch (pessoa->tipoDocumento) {
        case RG:
            printf("Documento: %s\n", pessoa->documentos.RG);
            break;
        case CPF:
            printf("Documento: %s\n", pessoa->documentos.CPF);
            break;
        case PASSAPORTE:
            printf("Documento: %s\n", pessoa->documentos.Passaporte);
            break;
        case NUM_SUS:
            printf("Documento: %s\n", pessoa->documentos.NumSus);
            break;
        default:
            printf("Documento invalido!\n");
            break;
    }

    printf("Idade: %d\n", pessoa->idade);

    switch (pessoa->genero) {
        case MASCULINO:
            printf("Genero: Masculino\n");
            break;
        case FEMININO:
            printf("Genero: Feminino\n");
            break;
        case OUTRO:
            printf("Genero: Outro\n");
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }
}

int main() {
    Pessoa pessoa;

    preencha(&pessoa);
    imprima(&pessoa);

    return 0;
}
