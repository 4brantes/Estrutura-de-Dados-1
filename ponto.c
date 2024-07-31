#include <stdio.h>   /* printf */
#include <stdlib.h>  /* malloc, free, exit */
#include <math.h>    /* sqrt */
#include "ponto.h"

/* Definição da estrutura ponto pode estar em ponto.h */
struct ponto {
    float x;
    float y;
};

/* Função para criar um ponto e alocar memória para ele */
Ponto* pto_cria(float x, float y) {
    Ponto* p = (Ponto*) malloc(sizeof(Ponto));
    if (p == NULL) {
        printf("Memória insuficiente!\n");
        exit(1);  // Correção: 'exit' em vez de 'Exit'
    }
    p->x = x;
    p->y = y;
    return p;
}

/* Função para liberar a memória alocada para um ponto */
void pto_libera(Ponto* p) {
    free(p);
}

/* Função para acessar os valores de x e y de um ponto */
void pto_acessa(Ponto* p, float* x, float* y) {
    *x = p->x;
    *y = p->y;  // Correção: Adicionado o ponto e vírgula
}

/* Função para atribuir novos valores a um ponto */
void pto_atribui(Ponto* p, float x, float y) {  // Correção: Corrigido o tipo de y
    p->x = x;
    p->y = y;
}

/* Função para calcular a distância entre dois pontos */
float pto_distancia(Ponto* p1, Ponto* p2) {
    float dx = p2->x - p1->x;
    float dy = p2->y - p1->y;
    return sqrt(dx * dx + dy * dy);
}
