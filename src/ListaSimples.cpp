#include "ListaSimples.h"

using namespace std;

ListaSimples::ListaSimples(){
  this.primeiro = NULL;
  this.ultimo = NULL;
  this.quantos = 0;
}

unsigned int ListaSimples::quantos(){
  return this.quantos;
}

template<class T>
void ListaSimples::adicionarComeço(T info){
  struct *NoLista no;
  *no->info = T;
  *no->prox = this.primeiro;
  this.primeiro = no;
}

template<class T>
void ListaSimples::adicionarFinal(T info){
  struct *NoLista no;
  *no->info = T;
  this.*ultimo->prox = no;
}
