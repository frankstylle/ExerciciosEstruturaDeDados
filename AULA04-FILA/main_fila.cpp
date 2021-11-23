#include <iostream>
#include "fila.h"

using namespace std;

int main()
{
    fila fila1;
    int opcao;
    tipoInteiro item;
    do
    {
        cout << "\n-----------------------------------------------------\n";
        cout << "\t\t PROGRAMA GERADOR DE FILAS";
        cout << "\n\n[ 0 ] ENCERRAR PROGRAMA";
        cout << "\n[ 1 ] INSERIR ELEMENTO";
        cout << "\n[ 2 ] REMOVER ELEMENTO";
        cout << "\n[ 3 ] IMPRIMIR A FILA\n\n";
        cout << "\n-----------------------------------------------------\n";
        cout << "DIGITE: ";
        cin >> opcao;
        if (opcao == 1)
        {
            if (!fila1.estaCheio())
            {
                cout << "Digite o elemento a ser inserido na fila!\n";
                cin >> item;
                fila1.inserir(item);
                cout << "\n* O item foi inserido na Fila *\n";
            }
            else
            {
                cout << "\n Erro ao inserir item\n";
                cout << "A fila esta cheia!\n";
            }
        }
        else if (opcao == 2)
        {
            item = fila1.remover();
            cout << "\nItem: " << item << " - foi removido da fila!\n";
        }
        else if (opcao == 3)
        {
            fila1.imprimir();
        };
    } while (opcao != 0);
    return 0;
}