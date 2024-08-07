/* 
 * File:   aula14.cpp
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
 *  sorts
 */

void bubblesort(int v[], int tam){
    int aux;
    for (int i = tam - 1; i >= 1; i--){
        for (int j = 0; j <= i - 1; j++){
            if (v[j]> v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}

void insertionsort(int v[], int tam){
    int aux, j;
    for (int i = 1; i <= tam - 1; i++){
        aux = v[i];
        j = i - 1;
        while((j >= 0) && (v[j] > aux)){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = aux;
    }
}

void selectionsort(int v[], int tam){
    int min, aux;
    for (int i = 0; i <= tam - 1; i++){
        min = i;
        aux = v[i];
        for (int j = i+1; j <= tam - 1; j++){
            if (v[j] < aux){
                min = j;
                aux = v[j];
            }
        }
        aux = v[i];
        v[i] = v[min];
        v[min] = aux;
    }
}

int main(int argc, char** argv) {

    const int QTD = 100000;
    int v[QTD], qtde = 0, y = 0;
    int x[QTD];
    int z[QTD];
    
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
    
    qtde = 0;
    y = 0;
    for (qtde = 0; qtde < QTD; qtde++){
        x[qtde] = -1;
    }
    
    for(int i = 0; i < QTD; i++){
        qtde = rand()%QTD;
        if(x[qtde] == -1){
            if(y < QTD){
                x[qtde] = y;
            }
            y++;
        }else 
            i--;
    }
    
    qtde = 0;
    y = 0;
    for (qtde = 0; qtde < QTD; qtde++){
        z[qtde] = -1;
    }
    
    for(int i = 0; i < QTD; i++){
        qtde = rand()%QTD;
        if(z[qtde] == -1){
            if(y < QTD){
                z[qtde] = y;
            }
            y++;
        }else 
            i--;
    }

    /*
    cout<<"BUBBLESORT:"<<endl;
    bubblesort(v, QTD);
    for (int i = 0; i < QTD; i++){
    cout<<v[i]<<endl;
    }
    
     
    cout<<"INSERTIONSORT:"<<endl;
    insertionsort(x, QTD);
    for (int i = 0; i < QTD; i++){
    cout<<x[i]<<endl;
    }
    
    cout<<"SELECTIONSORT:"<<endl;
    selectionsort(z, QTD);
    for (int i = 0; i < QTD; i++){
    cout<<z[i]<<endl;
    }
    */
    
    return 0;
}
