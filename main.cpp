#include <iostream>
#include <stdlib.h>
#include "pilha.h"

using namespace std;

int main()
{
    cout << "Pilha em Alocacao Sequencial\n\n" << endl;

    unsigned tamanho;
    int opc, valor;

    cout << "Qual o tamanho da pilha? ";
    cin >> tamanho;

    Pilha<int> p(tamanho);

    //Menu
    do{
        cout << "\n\n1 - Empilhar" << endl;
        cout << "2 - Desempilhar" << endl;
        cout << "3 - Elemento do Topo" << endl;
        cout << "4 - Exibir" << endl;
        cout << "5 - Fim" << endl;
        cout << "\n\nSelecione: ";
        cin >> opc;

        switch(opc){
            //Empilhar (inserir)
            case 1:
                if(p.pilhaCheia()){
                    cout << "Pilha Cheia..." << endl;
                }
                else{
                    cout << "\nDigite o Valor: ";
                    cin >> valor;
                    p.empilha(valor);

                    //cout << "Sucesso" << endl;
                }
                break;

            //Desempilhar (remover)
            case 2:
                if(p.pilhaVazia()){
                    cout << "Pilha Vazia..." << endl;
                }
                else{
                    cout << "\nDesempilha: " << p.desempilha() << endl;
                }
                break;

            //Elemento do Topo
            case 3:
                if(p.pilhaVazia()){
                    cout << "Pilha Vazia..." << endl;
                }
                else{
                    cout << "\nElemento do Topo: " << p.elementoTopo() << endl;
                }
                break;

            //Exibir Pilha
            case 4:
                cout << "\nElemento da Pilha:" << endl;
                for(int i=0; i<=p.getTopo(); i++)
                {
                    cout << p.getValor(i) << "   ";
                }
                cout << "\n\n";
                break;

            //Sair
            case 5:
                cout << "Fim...." << endl;
                break;

            default:
                cout << "Opcao Invalida!" << endl;
                break;

        }// Switch
        cout<<"\n\n";
        system("pause");
        system("cls");
    }
    while (opc != 5);
    return 0;
}
