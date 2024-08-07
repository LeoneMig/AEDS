/*
 * Miguel Leone - 2024.1.08.019
 * 
 * Biblioteca dos algoritmos de ordenação
 * 
 */

#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

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

int menu(){
    int a;
    
    cout<<"\tMENU\n";
    cout<<"1- BUBBLESORT"<<endl;
    cout<<"2- INSERTIONSORT"<<endl;
    cout<<"3- SELECTIONSORT"<<endl;
    cout<<"Opção: ";
    cin>>a;
    
    return a;
}