#include <iostream>
#include "fila.h"

using namespace std;

fila::fila() // contrutor{}
{
    primeiro = 0;
    ultimo = 0;
    estrutura = new tipoInteiro[max_itens];
}
fila::~fila() // destrutor
{
    delete[] estrutura;
}
bool fila::estaVazio() // isEmpty
{
    return (primeiro == ultimo); //se a fila estiver vazia retorna true = a fila esta vazia
}
bool fila::estaCheio() // isFull
{
    return ((ultimo - primeiro) == max_itens); // retorna verdadeiro se estiver cheio
}
void fila::inserir(tipoInteiro item) //push // enqueue
{
    if (fila::estaCheio())
    {
        cout << "A fila esta cheia\n";
        cout << "Esse elemento não pode ser inserido\n";
    }
    else
    {
        estrutura[ultimo % max_itens] = item;
        ultimo++;
    }
}
tipoInteiro fila::remover() //pop //dequeue
{
    if (fila::estaVazio())
    {
        cout << "A fila esta vazia!\n";
        cout << "Nenhum elemento foi removido!\n";
        return 0;
    }
    else
    {
        primeiro++;
        return estrutura[(primeiro - 1) % max_itens];
    }
}
void fila::imprimir() //print
{
    cout << "\n\nFila: [ ";
    for (int i = primeiro; i < ultimo; i++)
    {
        cout << estrutura[i % max_itens] << " ";
    }
    cout << "]\n\n";
}