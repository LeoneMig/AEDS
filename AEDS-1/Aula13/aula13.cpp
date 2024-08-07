/* 
 * File:   aula13.cpp
 * Author: Miguel Leone - 2024.1.08.019
 *
 */

#include <cstdlib>
#include <string>
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <math.h>
#include <fstream>

using namespace std;

/*
 *  funções
 */

void faz_tudo (int a, int b){
    int c = a * b;
    cout<<c<<endl;
}
int opcao(){
    int opc; 
    while (opc != 0){
        cout<<"\tMENU"<<endl;
        cout<<"Escolha a opção desejada:"<<endl;
        cout<<"1- Adicionar um veículo"<<endl;
        cout<<"2- Buscar veículo"<<endl;
        cout<<"3- Relatório"<<endl;
        cout<<"0- Sair"<<endl;
        cout<<"Opção: ";
        cin>>opc;
        if (opc > 3){
            opc = 0;
        }
    }
    return opc;
}
void cabecalho(){
    cout<<"Ordenação"<<endl;
}

int main(int argc, char** argv) {
    
    int a = 0, b = 0;
    
    cout<<"A:";
    cin>>a;
    cout<<"B:";
    cin>>b;
    faz_tudo(a, b);
    cabecalho();

    
    switch(opcao()){
        case 1:
            cout<<"Adicione"<<endl;
            break;
        case 2:
            cout<<"Busque"<<endl;
            break;
        case 3:
            cout<<"Relatório"<<endl;
            break;
        case 0: 
            cout<<"0";
            break;
    }
    
    
    return 0;
}
