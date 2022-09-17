#include <stdio.h>
#include <stdlib.h>

struct lista{
  int valor;
  struct lista *proximo;
};

struct lista *insere_inicio(struct lista *n,int x){
  struct lista *novo;
  if (n==NULL){
    n=(struct lista*) malloc(sizeof(struct lista));
    n->valor=x;
    n->proximo=NULL;
    return n;
  }
  else {
    novo=(struct lista*) malloc(sizeof(struct lista));
    novo->valor=x;
    novo->proximo=n;
    return novo;
  }
}

struct lista *insere_final(struct lista *n,int x){
  struct lista *novo=(struct lista*) malloc(sizeof(struct lista));
  novo->valor=x;
  if (n==NULL){
    novo->proximo=NULL;
    return novo;
  }
  else {
    struct lista *temp=n;
    while(temp->proximo!=NULL){
      temp=temp->proximo;
    }
    novo->proximo=NULL;
    temp->proximo=novo;
    return n;
  }
}


int main(){
  struct lista *inicio=NULL;
  if (inicio==NULL){
    printf("Criando lista...\n");
    inicio=(struct lista *) malloc(sizeof(struct lista));
    printf("Lista criada...\n");
    if (inicio!=NULL){
      inicio -> valor=100;
      inicio->proximo=NULL;
    }
    printf("O valor da variavel do primeiro no eh %i\n.",inicio->valor);
  }
  return 0;
  }

  