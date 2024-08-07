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

    const int PROD = 2, MES = 12;
    int mat1[PROD][MES], a, venda_mensal[MES] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    
    cout<<"Preencha a tabela de vendas dos produtos:"<<endl<<endl;
    for(int i = 0; i < PROD; i++){
        for(int j = 0; j < MES; j++){
            cout<<"Digite a quantidade de vendas do "<<i+1<<"° produto no mês "<<j+1<<": ";
            cin>>a;
            mat1[i][j] = a;
        }
        cout<<endl;
    }
    
    
    for(int i = 0; i < PROD; i++){
        for(int j = 0; j < MES; j++){
            venda_mensal[j] = venda_mensal[j] + mat1[i][j];
        }
    }
    for(int j = 0; j < MES; j++){
            cout<<" "<<venda_mensal[j]<<endl;
        }

    return 0;
}
