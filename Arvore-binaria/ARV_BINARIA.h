#ifndef ARV_BINARIA_H
#define ARV_BINARIA_H

typedef struct ARV_BINARIA{
    char* palavra_ingles;
    int unidade; 
    ARV_BINARIA *esquerda; 
    ARV_BINARIA *direita; 
}ARV_BINARIA;

ARV_BINARIA *criar_arvore_binaria(char palavra, int unidade);
ARV_BINARIA *inserirNo(ARV_BINARIA * raiz,char palavra, int unidade);

#endif