/*
 * Miguel Leone - 2024.1.08.019
 * 
 * Biblioteca dos algoritmos de ordenação e complementos
 * 
 */

#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <time.h>

using namespace std;

void bubblesort(int v[], int tam, int cont){
    int aux;
    for (int i = tam - 1; i >= 1; i--){
        for (int j = 0; j <= i - 1; j++){
            if (v[j]> v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
                cont = cont + 3;
            }
        }
    }
    cout<<"Número de trocas para um vetor com "<<tam<<" itens: "<<cont;
}

void insertionsort(int v[], int tam, int cont){
    int aux, j;
    for (int i = 1; i <= tam - 1; i++){
        aux = v[i];
        cont++;
        j = i - 1;
        while((j >= 0) && (v[j] > aux)){
            v[j+1] = v[j];
            cont++;
            j--;
        }
        v[j+1] = aux;
        cont++;
    }
    cout<<"Número de trocas para um vetor com "<<tam<<" itens: "<<cont;
}

void selectionsort(int v[], int tam, int cont){
    int min, aux;
    for (int i = 0; i <= tam - 1; i++){
        min = i;
        aux = v[i];
        cont++;
        for (int j = i+1; j <= tam - 1; j++){
            if (v[j] < aux){
                min = j;
                aux = v[j];
                cont++;
            }
        }
        aux = v[i];
        v[i] = v[min];
        v[min] = aux;
        cont = cont + 3;;
    }
    cout<<"Número de trocas para um vetor com "<<tam<<" itens: "<<cont;
}

void vector(int QTD, int v[]){
    int qtde = 0, y = 0;
    
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
}