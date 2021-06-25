#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

template <typename Tipo>

class Pilha{
private:
    Tipo *v; //Ponteiro do vetor
    unsigned tamanho; //max
    int topo;

public:
    //Fun��o inicializadora
    Pilha(unsigned tam){
        tamanho = tam;
        v = new Tipo[tamanho];
        topo = -1; //Valor inicial
    }

    ~Pilha(){
        delete []v;
    }

    //Inser��o
    void empilha(Tipo x){
        topo++;
        v[topo] = x;
    }

    //Remo��o
    Tipo desempilha(){
        Tipo temp = v[topo];
        topo--;
        return temp;
    }

    //�ltimo elemento inserido
    Tipo elementoTopo(){
        return v[topo];
    }

    bool pilhaCheia(){
        return topo == tamanho-1;
    }

    bool pilhaVazia() {
        return topo == -1;
    }

    //Posi��o do topo (�ndice)
    unsigned getTopo(){
        return topo;
    }

    unsigned getTamanho(){
        return tamanho;
    }

    Tipo getValor(unsigned posicao){
        return v[posicao];
    }
};

#endif // PILHA_H_INCLUDED
