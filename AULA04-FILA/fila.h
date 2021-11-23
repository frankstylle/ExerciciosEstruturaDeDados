// fila = queue
typedef int tipoInteiro;
const int max_itens = 5;

class fila
{
private:
    int primeiro, ultimo;
    tipoInteiro *estrutura;

public:
    fila();                         // contrutor
    ~fila();                        // destrutor
    bool estaVazio();               // isEmpty
    bool estaCheio();               // isFull
    void inserir(tipoInteiro item); //push // enqueue
    tipoInteiro remover();          //pop //dequeue
    void imprimir();                //print
};