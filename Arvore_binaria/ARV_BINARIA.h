#ifndef ARV_BINARIA_H
#define ARV_BINARIA_H

typedef struct ARV_BINARIA{
    char palavra_ingles[25];
    int unidade; 
    ARV_BINARIA *esquerda; 
    ARV_BINARIA *direita; 
}ARV_BINARIA;

#endif