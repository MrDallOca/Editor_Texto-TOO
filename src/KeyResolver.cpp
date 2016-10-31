#include "KeyResolver.h"

typedef void(*ponteiro_f)();

map<unsigned short int, void(*)()> associacoes;
void (*defaultAction)(unsigned short int);

KeyResolver::KeyResolver(void (*f)(unsigned short int)) : defaultAction(f){
  associacoes = map<unsigned short int, void(*)()>();
}


KeyResolver::~KeyResolver(){
  associacoes = map<unsigned short int, void(*)()>();
}

KeyResolver::KeyResolver(const KeyResolver& oso){
}

KeyResolver::KeyResolver(){

}

void KeyResolver::resolver(){
  iterator it;
  int i = getch();
  it = associacoes.find(i);
  if (it != associacoes.end()){
    it->second();
  }
  else
    defaultAction(i);
}

void KeyResolver::mapear(const unsigned short int i, void (*f)()){
  associacoes[i] = f;
}

ponteiro_f KeyResolver::operator[](const unsigned short int& i){
  return associacoes[i];
}

ponteiro_f KeyResolver::operator[](unsigned short int& i){
  return associacoes[i];
}
