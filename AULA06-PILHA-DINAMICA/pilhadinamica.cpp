#include <iostream>
#include "pilhadinamica.h"
#include <cstddef> //Biblioteca para poder usar NULL onde precisar

using namespace std;

PilhaDinamica::PilhaDinamica() // construtor
{
    NoTopo = NULL;
}
PilhaDinamica::~PilhaDinamica() // destrutor
{
    No *NoTemp;
    while (NoTopo != NULL)
    {
        NoTemp = NoTopo;
        NoTopo = NoTopo->proximo;
        delete NoTemp;
    }
}
bool PilhaDinamica::estaVazio() // isEmpty
{
    return (NoTopo == NULL); // se o NoTopo é NULL quer diser que a pilha esta vazia
}
bool PilhaDinamica::estaCheio() // se tem memoria - isFull
{
    No *NoNovo;
    try
    {
        NoNovo = new No;
        delete NoNovo;
        return false;
    }
    catch (bad_alloc exception) //bad_alloc = mal alocamento, ou seja sem espaço
    {
        return true;
    }
}
void PilhaDinamica::inserir(tipoInteiro item) //push
{
    if (PilhaDinamica::estaCheio())
    {
        cout << "\nA Pilha está cheia!\n";
        cout << "Não foi possivel inserir esse elemento!\n";
    }
    else
    {
        No *NoNovo = new No;
        NoNovo->valor = item;
        NoNovo->proximo = NoTopo;
        NoTopo = NoNovo;
    }
}
tipoInteiro PilhaDinamica::remover() // pop
{
    if (PilhaDinamica::estaVazio())
    { // ta vazio a pilha?
        cout << "A pilha esta vazia!\n";
        cout << "Não foi possivel remover nenhum elemento!\n";
        return 0;
    }
    else
    {
        No *NoTemp;
        NoTemp = NoTopo;
        tipoInteiro item = NoTopo->valor;
        NoTopo = NoTopo->proximo;
        delete NoTemp;
        return item;
    }
}
void PilhaDinamica::imprimir() // print
{
    No *NoTemp = NoTopo;
    cout << "Pilha: [ ";
    while (NoTemp != NULL)
    {
        cout << NoTemp->valor << " ";
        NoTemp = NoTemp->proximo;
    }
    cout << "]\n";
}