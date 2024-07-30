#include <stdio.h>
#include <string.h>

typedef struct produto {
    char nome[100];
    float preco;
    char tipo[10];
} Produto;

int main(void) {
    Produto produto;

    printf("Digite o nome do produto:\n");
    scanf(" %[^\n]s", produto.nome);
    printf("Digite o preço do produto:\n");
    scanf("%f", &produto.preco);
    printf("Digite o tipo do produto (ALIMENTO, BEBIDA ou ELETRONICO):\n");
    scanf(" %[^\n]s", produto.tipo);

    printf("Produto: %s | Preço: %.1f | Tipo: %s\n", produto.nome, produto.preco, produto.tipo);

    return 0;
}
