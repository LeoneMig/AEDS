/*
 * File:   main.cpp
 * Author: Miguel Leone - 2024.1.08.019
 *
 */

// Operações com matrizes

#include <cstdlib>
#include <string>
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <math.h>
#include <fstream>
#include "matrizes.h"

using namespace std;

typedef int Tmat[100][100];

int main(int argc, char** argv) {

    Tmat m1, m2, m3;
    int L1, L2, L3, C1, C2, C3;

    cout<<"Número de linhas da matriz 1: ";
    cin>>L1;
    cout<<"Número de colunas da matriz 1: ";
    cin>>C1;
    cout<<"Número de linhas da matriz 2: ";
    cin>>L2;
    cout<<"Número de colunas da matriz 2: ";
    cin>>C2;


    cria(m1, L1, C1,
         m2, L2, C2);

    cout<<endl<<"Matriz 1:"<<endl;
    printMat(m1, L1, C1);
    cout<<endl<<"Matriz 2:"<<endl;
    printMat(m2, L2, C2);


    switch(menu()){
        case 1:
            cout<<"Qual matriz deseja transpor: "<<endl;
            cout<<"1- Matriz 1"<<endl;
            cout<<"2- Matriz 2"<<endl;
            cout<<"Opção: ";
            int escolha;
            cin>>escolha;
            if(escolha == 1){
                transp(m1, L1, C1);
            }else
                if(escolha == 2){
                    transp(m2, L2, C2);
                }else
                    cout<<"Escolha Inválida"<<endl;
            break;
        case 2:
            soma(m1, L1, C1,
                 m2, L2, C2,
                 m3, L3, C3);
            break;
        case 3:
            cout<<"Quais matrizes multiplicar?"<<endl;
            cout<<"1- Matriz 1 * Matriz 2"<<endl;
            cout<<"2- Matriz 2 * Matriz 1"<<endl;
            cout<<"3- Matriz 1 * Matriz 1"<<endl;
            cout<<"4- Matriz 2 * Matriz 2"<<endl;
            cout<<"Escolha: ";
            int select;
            cin>>select;
            if(select == 1){
                multiplica(m1, L1, C1,
                           m2, L2, C2,
                           m3, L3, C3);
            }else
                if(select == 2){
                    multiplica(m2, L2, C2,
                               m1, L1, C1,
                               m3, L3, C3);
            }else
                if(select == 3){
                    multiplica(m1, L1, C1,
                               m1, L1, C1,
                               m3, L3, C3);
                }else
                    if(select == 4){
                        multiplica(m2, L2, C2,
                                   m2, L2, C2,
                                   m3, L3, C3);
                    }else
                        cout<<"Escolha Inválida"<<endl;
            break;
        case 4:
            cout<<"Qual matriz deseja obter a média: "<<endl;
            cout<<"1- Matriz 1"<<endl;
            cout<<"2- Matriz 2"<<endl;
            cout<<"Opção: ";
            int opc;
            cin>>opc;
            if(opc == 1){
                media(m1, L1, C1);
            }else
                if(opc == 2){
                    media(m2, L2, C2);
                }else
                    cout<<"Escolha Inválida"<<endl;
            break;
        default:
            cout<<"Opção Inválida"<<endl;

    }

    return 0;
}