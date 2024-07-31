/*TAD:Círculo*/
/* dependência de módulos*/
#include"ponto.h"
/* tipo exportado*/
typedef struct circulo Circulo;
/*funções exportadas*/
Circulo* cir_cria(float x,float y, float r);
void circ_libera(Circulo*c);
float circ_area(circulo*c);
int circ_interior (Circulo*c, Ponto*p);



