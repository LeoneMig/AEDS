/* 
 * File:   aula15.cpp
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
#include "sorts.h"

using namespace std;

/*
 *  sorts e bibliotecas melhorado
 */


int main(int argc, char** argv) {

    const int QTD = 10;
    int v[QTD];
    
    vector(QTD, v);
    
    switch(menu()){
        case 1:
            cout<<"BUBBLESORT:"<<endl;
            bubblesort(v, QTD);
            for (int i = 0; i < QTD; i++){
                cout<<v[i]<<endl;
            }
            break;
        case 2:
            cout<<"INSERTIONSORT:"<<endl;
            insertionsort(v, QTD);
            for (int i = 0; i < QTD; i++){
                cout<<v[i]<<endl;
            }
            break;
        case 3: 
            cout<<"SELECTIONSORT:"<<endl;
            selectionsort(v, QTD);
            for (int i = 0; i < QTD; i++){
                cout<<v[i]<<endl;
            }
            break;
        default:
            cout<<"Opção Inválida"<<endl;
    }
  
    return 0;
}
