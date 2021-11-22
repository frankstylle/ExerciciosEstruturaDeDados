typedef int tipoInteiro;
const int max_itens = 100;

class pilha
{
private:
    tipoInteiro tamanho;
    tipoInteiro *estrutura; // (*) = new  para criar um vetor

public:
    pilha();                        // constructor
    ~pilha();                       // destrutora
    bool estaCheia();               // verifica se a pilha está cheia
    bool estaVazia();               // verifica se a pilha está vazia
    void inserir(tipoInteiro item); // função para inserir item // push = inserir
    tipoInteiro remover();          // função para remover item // pop = remover
    void imprimir();                // imprimir todos itens da pilha
    tipoInteiro qualTamanho();      // retorna quantidade de itens // length
};