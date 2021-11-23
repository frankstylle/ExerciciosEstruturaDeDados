#include <iostream>
#include "pilhadinamica.h"

using namespace std;

int main()
{
    PilhaDinamica pilha1;
    tipoInteiro item;
    int opcao;

    do
    {
        //MENU
        cout << "\n----------------------------------\n";
        cout << "\nGERADOR DE PILHA DINÂMICA\n";
        cout << "[0] FECHAR PROGRAMA\n";
        cout << "[1] INSERIR UM ELEMENTO\n";
        cout << "[2] REMOVER UM ELEMENTO\n";
        cout << "[3] IMPRIMIRA A PILHA TODA\n";
        cout << "\n----------------------------------\n";
        cin >> opcao;

        if (opcao == 1)
        { // INSERIR
            cout << "Digite o elemento a ser inserido: ";
            cin >> item;
            pilha1.inserir(item);
        }
        else if (opcao == 2)
        { // REMOVER
            item = pilha1.remover();
            cout << "\nElemento removido: " << item << " \n";
        }
        else if (opcao == 3)
        { // IMPRIMIR PILHA
            pilha1.imprimir();
        }
    } while (opcao != 0);

    return 0;
}