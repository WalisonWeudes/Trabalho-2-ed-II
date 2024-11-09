#ifndef ARV2_3_H 
#define ARV2_3_H 
#include "Arvore-binaria/ARV_BINARIA.h"


typedef struct Informacao{
    ARV_BINARIA *palavra_ingles; 
    char palavra_portugues[25];
    int unidade;
}Informacao;


typedef struct ARV2_3{
    Informacao info1; 
    Informacao info2; 
    int quant_infos; 
    ARV2_3 *esquerda; 
    ARV2_3 *centro; 
    ARV2_3 *direita; 
} ARV2_3;


#endif