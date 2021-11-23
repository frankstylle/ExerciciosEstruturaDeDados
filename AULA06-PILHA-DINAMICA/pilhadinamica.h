// Pilha Dinãmica = Dynamic Stack

typedef int tipoInteiro;

struct No //Node
{
    tipoInteiro valor;
    No *proximo;
};

class PilhaDinamica
{
private:
public:
    No *NoTopo;
    PilhaDinamica();                // construtor
    ~PilhaDinamica();               // destrutor
    bool estaVazio();               // isEmpty
    bool estaCheio();               // se tem memoria - isFull
    void inserir(tipoInteiro item); //push
    tipoInteiro remover();          // pop
    void imprimir();                // print
};