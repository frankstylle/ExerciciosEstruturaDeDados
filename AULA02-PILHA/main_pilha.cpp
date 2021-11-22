#include <iostream>
#include "pilha.h"

using namespace std;

int main()
{
    pilha pilha1;
    tipoInteiro item;
    int opcao;
    cout << "Programa gerador de pilhas:\n";

    do
    {
        cout << "\n\nDigite 0 para parar o programa!\n";
        cout << "Digite 1 para inserir um elemento\n";
        cout << "Digite 2 para remover um elemento\n";
        cout << "Digite 3 para imprimira a pilha\n";
        cout << "Digite 4 para verificar o tamanho da pilha\n";
        cout << "Digite 5 para verificar se a pilha está cheia\n";
        cout << "Digite 6 para verificar se a pilha está vazia\n";
        cin >> opcao;
        if (opcao == 1)
        {
            cout << "Digite o elemento a ser inserido: \n";
            cin >> item;
            pilha1.inserir(item);
            cout << "Item inserido na pilha \n";
        }
        else if (opcao == 2)
        {
            item = pilha1.remover();
            cout << "Elemento removido: " << item << endl
                 << "\n";
        }
        else if (opcao == 3)
        {
            pilha1.imprimir();
        }
        else if (opcao == 4)
        {
            cout << "Quantidade de itens na pilha: " << pilha1.qualTamanho() << "\n";
        }
        else if (opcao == 5)
        {
            bool cheia = pilha1.estaCheia();
            if (cheia)
            {
                cout << "A pilha está cheia: "
                     << "Está cheia"
                     << "\n";
            }
            else
            {
                cout << "Ainda falta: " << max_itens - pilha1.qualTamanho() << " para encher a pilha";
            }
        }
        else if (opcao == 6)
        {
            bool vazia = pilha1.estaVazia();
            if (vazia)
            {
                cout << "A pilha está vazia: "
                     << "Está Vazia"
                     << "\n";
            }
            else
            {
                cout << "pila não está vazia";
            }
        }
    } while (opcao != 0);
    cout << "\n Programa encerrado pelo usuario!";
    return 0;
}