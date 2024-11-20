#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Arvore-binaria/ARV_BINARIA.h"

ARV_BINARIA *criar_arvore_binaria(char palavra, int unidade){

  
  ARV_BINARIA* novoNo = (ARV_BINARIA*)malloc(sizeof(ARV_BINARIA));

  if(novoNo ==  NULL){
    printf("Erro ao criar No na arvore Binaria.\n");
    exit(1);
  }

  novoNo->palavra_ingles = strdup(palavra);
    if (novoNo->palavra_ingles == NULL) {
        printf("Erro ao alocar memória para a palavra!\n");
        free(novoNo);  // Libera a memória alocada para o nó
        return NULL;
    }
  novoNo->esquerda = NULL;
  novoNo->direita = NULL;
  novoNo->unidade = unidade;

  return novoNo;

}

ARV_BINARIA *inserirNo(ARV_BINARIA * raiz,char palavra, int unidade){

      if (raiz == NULL) {
        return criarNo(palavra);
    }
    // Compara a palavra a ser inserida com a palavra do nó atual
    if (strcmp(palavra, raiz->palavra_ingles) < 0) {
        // Se a palavra for menor, insere à esquerda
        raiz->esquerda = inserir(raiz->esquerda, palavra);
    } else if (strcmp(palavra, raiz->palavra_ingles) > 0) {
        // Se a palavra for maior, insere à direita
        raiz->direita = inserir(raiz->direita, palavra);
    }
    
    return raiz;
}

// funções da binaria aqui 
