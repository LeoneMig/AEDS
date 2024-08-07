/* 
 * File:   aula16.cpp
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
 *  matrizes
 */


int main(){

    const int QTD = 2;
    int mat1[QTD][QTD], mat2[QTD][QTD], mat3[QTD][QTD], a;
    
    cout<<"Preencha a 1° matriz:"<<endl<<endl;
    for(int i = 0; i < QTD; i++){
        for(int j = 0; j < QTD; j++){
            cout<<"Digite a linha "<<i+1<<" coluna "<<j+1<<": ";
            cin>>a;
            mat1[i][j] = a;
        }
    }
    
    cout<<endl<<"Preencha a 2° matriz:"<<endl<<endl;
    for(int i = 0; i < QTD; i++){
        for(int j = 0; j < QTD; j++){
            cout<<"Digite a linha "<<i+1<<" coluna "<<j+1<<": ";
            cin>>a;
            mat2[i][j] = a;
        }
    }
    
    for(int i = 0; i < QTD; i++){
        for(int j = 0; j < QTD; j++){
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    
    cout<<endl<<"Resultado da somatória de matrizes:"<<endl<<endl;
    for(int i = 0; i < QTD; i++){
        for(int j = 0; j < QTD; j++){
            cout<<"["<<i+1<<"]"<<"["<<j+1<<"] = "<<mat3[i][j]<<endl;
        }
    }
    
    return 0;
}
