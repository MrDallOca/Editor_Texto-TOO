#ifndef BUFFER
#define BUFFER

#include "MyString.h"
#include "ListaCD.h"

class Buffer{
public:
    Buffer();
    Buffer(ListaCD<MyString*>* novaLista);
    char* linhasAsString();
    void subirLinha();
    void descerLinha();
    void irParaEsquerda();
    void irParaDireita();
    void inserirCaracter(char);
    void inserirLinha();
    void deletarADireita();
    void deletarAEsquerda();
    char* getLinha(unsigned int);
private:
    ListaCD<MyString*>* linhas;
    unsigned int *coluna;
};

#endif
