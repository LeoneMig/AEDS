/*
 * Miguel Leone - 2024.1.08.019
 * 
 * Biblioteca de matrizes
 * 
 */

#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <math.h>

typedef int Tmat[100][100];

using namespace std;

void cria(Tmat m1, int L1, int C1,
          Tmat m2, int L2, int C2){
    int a;
    cout<<"Preencha a 1° matriz:"<<endl<<endl;
    for(int i = 0; i < L1; i++){
        for(int j = 0; j < C1; j++){
            cout<<"Digite a linha "<<i+1<<" coluna "<<j+1<<": ";
            cin>>a;
            m1[i][j] = a;
        }
    }
    
    cout<<endl<<"Preencha a 2° matriz:"<<endl<<endl;
    for(int i = 0; i < L2; i++){
        for(int j = 0; j < C2; j++){
            cout<<"Digite a linha "<<i+1<<" coluna "<<j+1<<": ";
            cin>>a;
            m2[i][j] = a;
        }
    }
}

void soma(Tmat m1, int L1, int C1,
          Tmat m2, int L2, int C2,
          Tmat m3, int L3, int C3){
    
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
}

void subtrai(Tmat m1, int L1, int C1,
          Tmat m2, int L2, int C2,
          Tmat m3, int L3, int C3){
    
    for(int i = 0; i < L3; i++){
        for(int j = 0; j < C3; j++){
            m3[i][j] = m1[i][j] - m2[i][j];
        }
    }
    cout<<endl<<"Resultado da subtração de matrizes:"<<endl<<endl;
    for(int i = 0; i < L3; i++){
        for(int j = 0; j < C3; j++){
            cout<<m3[i][j] << " ";
        }
        cout<<endl;
    }
}