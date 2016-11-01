#include <stdlib.h>
#include <map>

#include "Pilha.h"
#include "Buffer.h"
#include "KeyResolver.h"

using namespace std;

class Editor{
  
  typedef enum{
    esquerda, direita,
    inserirCaracter,
    descer, subir,
    novaLinha
  }Acao;

  typedef std::map<Comentario, void(*)()> Acoes;

public:
  Editor();
  ~Editor();
  Editor(const Editor&);
  void iniciar();

private:
  void loop();
  Buffer buf;
  KeyResolver kr;
  Acoes acoes;
  Pilha<Acao> pilha_acoes;
  char parar;

};
