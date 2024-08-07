/* 
 * File:   aula11.cpp
 * Author: Miguel Leone - 2024.1.08.019
 *
 * Created on 29 de abril de 2024, 16:10
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
 * teste
 */

typedef struct{                 //declara tipo, neste caso, tipo "pessoa"
    string nome;
    string celular;
    string cidade;
    string email;
    bool valido;
} Pessoa;

int main(int argc, char** argv) {
    
    const int QTD = 1000;
    Pessoa amigo;
    Pessoa agenda[QTD];
    int qtde = 0, opc;
    string exclui;
    
    
    ifstream arquivo("agendas.txt");
    if(!arquivo.is_open()){
        cout<<"Erro: arquivo inexistente."<<endl;
        return 1;
    }
    

    arquivo>>agenda[0].nome;
    for (qtde = 0 ;agenda[qtde].nome != "fim"; qtde++){

        arquivo>>agenda[qtde].celular;
        arquivo>>agenda[qtde].cidade;
        arquivo>>agenda[qtde].email;
        arquivo>>agenda[qtde+1].nome;
        agenda[qtde].valido = true;
    }
    
    do{
        cout<<"\tMENU"<<endl;
        cout<<"Escolha a opção desejada:"<<endl;
        cout<<"1- Adicionar um amigo a agenda."<<endl;
        cout<<"2- Remover um amigo da agenda."<<endl;
        cout<<"3- Buscar um amigo na agenda."<<endl;
        cout<<"0- Sair."<<endl;
        cout<<"Opção: ";
        cin>>opc;
        switch(opc){
            case 1:
                agenda[qtde].valido = true;
                cout<<"Nome: ";
                cin>>agenda[qtde].nome;
                cout<<"Celular: ";
                cin>>agenda[qtde].celular;
                cout<<"Cidade: ";
                cin>>agenda[qtde].cidade;
                cout<<"Email: ";
                cin>>agenda[qtde].email;
                agenda[qtde+1].nome = "fim";
                qtde++;
                break;
            case 2:
                cout<<"Amigo que deseja remover da agenda: ";
                cin>>exclui;
                for(int i = 0; i <= qtde; i++){
                    if (agenda[i].nome == exclui){
                        agenda[i].valido = false;
                    }
                }
                break;
            case 3:
                cout<<"Amigo que deseja buscar na agenda: ";
                cin>>exclui;
                for(int i = 0; i <= qtde; i++){
                    if (agenda[i].nome == exclui && agenda[i].valido == true){
                        cout<<endl<<agenda[i].nome<<endl;
                        cout<<agenda[i].celular<<endl;
                        cout<<agenda[i].cidade<<endl;
                        cout<<agenda[i].email<<endl<<endl;
                    }
                }
                break;
            case 0:
                break;
        }
            
    } while(opc != 0);
    
    ofstream arquivo2("agendas.txt");
    if(!arquivo2.is_open()){
        cout<<"Erro: arquivo inexistente."<<endl;
        return 1;
    }
    
    for (qtde = 0 ; agenda[qtde].nome != "fim"; qtde++){
        if (agenda[qtde].valido == true){
        arquivo2<<agenda[qtde].nome<<"\t";
        arquivo2<<agenda[qtde].celular<<"\t";
        arquivo2<<agenda[qtde].cidade<<"\t";
        arquivo2<<agenda[qtde].email<<"\t\n";
        }   
    }
    arquivo2<<"fim";

    return 0;
}
