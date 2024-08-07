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
 *  sorts e bibliotecas
 */


int main(int argc, char** argv) {

    const int QTD = 10;
    int v[QTD], qtde = 0, y = 0;
    
    srand(time(NULL));
    for (qtde = 0; qtde < QTD; qtde++){
        v[qtde] = -1;
    }
    
    for(int i = 0; i < QTD; i++){
        qtde = rand()%QTD;
        if(v[qtde] == -1){
            if(y < QTD){
                v[qtde] = y;
            }
            y++;
        }else 
            i--;
    }

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
