/*
 * File:   matrizes.cpp
 * Author: Miguel Leone - 2024.1.08.019
 *
 */

// Biblioteca de operações com matrizes

#include <cstdlib>
#include <string>
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <math.h>
#include <fstream>

using namespace std;

typedef int Tmat[100][100];

int menu(){
    cout<<"Selecione o que deseja fazer com as matrizes criadas:"<<endl;
    cout<<"1- Transpor matriz"<<endl;
    cout<<"2- Somar matrizes"<<endl;
    cout<<"3- Multiplicar matrizes"<<endl;
    cout<<"4- Encontrar a razão das matrizes"<<endl;
    cout<<"Opção: ";
    int opc;
    cin>>opc;
    return opc;
}

void cria(Tmat m1, int L1, int C1,
          Tmat m2, int L2, int C2){
    int qtde;

    cout<<"Valor máximo dos números da matriz 1: ";
    cin>>qtde;

    srand(time(NULL));
    for(int i = 0; i < L1; i++){
        for(int j = 0; j < C1; j++){
            m1[i][j] = rand()%qtde;
        }
    }

    cout<<"Valor máximo dos números da matriz 2: ";
    cin>>qtde;
    for(int i = 0; i < L2; i++){
        for(int j = 0; j < C2; j++){
            m2[i][j] = rand()%qtde;
        }
    }
}

void soma(Tmat m1, int L1, int C1,
          Tmat m2, int L2, int C2,
          Tmat m3, int L3, int C3){

    if (L1 == L2 && C1 == C2){
        L3 = L1;
        C3 = C1;
        for(int i = 0; i < L3; i++){
             for(int j = 0; j < C3; j++){
                 m3[i][j] = m1[i][j] + m2[i][j];
             }
         }

         cout<<endl<<"Resultado da somatória de matrizes:"<<endl<<endl;
         for(int i = 0; i < L3; i++){
             for(int j = 0; j < C3; j++){
                 cout<<m3[i][j] << " ";
             }
             cout<<endl;
         }
    } else
        cout<<"Impossível somar as matrizes, pois não são do mesmo tamanho"<<endl;
}

void printMat(Tmat m, int L, int C){

    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}

void transp(Tmat m, int L, int C){

    int LTransp = C;
    int CTransp = L;
    Tmat mTransp;

    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
            mTransp[j][i] = m[i][j];
        }
    }

    cout<<"A matriz transposta é:"<<endl;
    for(int i = 0; i < LTransp; i++){
        for(int j = 0; j < CTransp; j++){
            cout<<mTransp[i][j]<<" ";
        }
        cout<<endl;
    }
}

void multiplica(Tmat m1, int L1, int C1,
                Tmat m2, int L2, int C2,
                Tmat m3, int L3, int C3){

    if(C1 == L2){
        L3 = L1;
        C3 = C2;
        for(int i = 0; i < L3; i++){
            for(int j = 0; j < C3; j++){
                m3[i][j] = 0;
                for(int k = 0; k < C1; k++){
                    m3[i][j] = m3[i][j] + (m1[i][k] * m2[k][j]);
                }
            }
        }
        cout<<"O resultado da multiplicação é:"<<endl;
        for(int i = 0; i < L3; i++){
            for(int j = 0; j < C3; j++){
                cout<<m3[i][j]<<" ";
            }
            cout<<endl;
        }

    }else
        cout<<"Impossível multiplicar as matrizes"<<endl;
}

void media(Tmat m, int L, int C){
    int cont = 0;
    float media = 0.0;
    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
           media = media + m[i][j];
           cont++;
        }
    }
    media = media/cont;
    cout<<"A média dos valores da matriz é "<<media<<endl;
}