#include <iostream>
#include "pilha.h"

using namespace std;

pilha::pilha() /* constructor */
{
    tamanho = 0;
    estrutura = new tipoInteiro[max_itens];
}

pilha::~pilha() /* destrutora */
{
    delete[] estrutura;
}

bool pilha::estaCheia() // verifica se a pilha esta cheia // isFull
{
    return (tamanho == max_itens); // se estiver cheia a pilha retorna true senão false
}
bool pilha::estaVazia() // verifica se a pilha esta cheia // isFull
{
    return (tamanho == 0); // se estiver cheia a pilha retorna true senão false
}

void pilha::inserir(tipoInteiro item) //push - método para adicionar item na pilha
{
    if (estaCheia())
    {
        cout << "A pilha está cheia!\n";
        cout << "Não é possivel inserir este elemento!\n";
    }
    else
    {
        estrutura[tamanho] = item;
        tamanho++;
    }
}

tipoInteiro pilha::remover() //pop - método para remover um item da pilha
{
    if (this->estaVazia())
    {
        cout << "A pilha esta vazia!\n";
        cout << "Não tem elemento para ser removido!\n";
        return 0;
    }
    else
    {
        tamanho--;
        return estrutura[tamanho - 1];
    }
}

void pilha::imprimir() //print
{
    cout << "Pilha: [ ";
    for (int i = 0; i < tamanho; i++)
    {
        cout << estrutura[i] << "\t";
    }
    cout << " ]";
}

int pilha::qualTamanho() // length
{
    return tamanho;
}