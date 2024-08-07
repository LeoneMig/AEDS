/* 
 * File:   aula10.cpp
 * Author: Miguel Leone - 2024.1.08.019
 *
 * Created on 12 de março de 2024, 17:17
 */

#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <math.h>



using namespace std;

/*
 * aula
 */
int main(int argc, char** argv) {

    const int QTD = 10;
    int vect[QTD], i=0, escolha=0, opc, aux;
    
    srand(time(NULL));
        
    while(i<QTD){
    vect[i] = 100+rand()%101;
    i++;
    }
    cout<<"Você possui o vetor:"<<endl;
        for (i=0; i<QTD; i++){
            cout<<vect[i]<<endl;
        }
    cout<<endl;
    i=0;
    do{
        cout<<"\tEscolha uma das opções:"<<endl<<"1- Inverter a ordem dos valores do vetor."<<endl<<"2- Retirar do vetor todas as ocorrências de um determinado valor."<<endl<<"3- Retirar de um vetor todos os valores repetidos."<<endl<<"0- Sair."<<endl<<endl;
        cout<<"Opção: ";
        cin>>opc;
        cout<<endl;
        switch(opc){
            case 1:
                
                break;
            case 2:
                cout<<"Escolha um valor existente no vetor."<<endl<<"Número escolhido: ";
                cin>>escolha;
                cout<<endl;
                
                break;
            case 3:
                
                break;
            case 0: 
                break;
            default:
                cout<<"Opção inválida."<<endl;   
        }
       
    }while (opc != 0);
       
    return 0;
  
}
