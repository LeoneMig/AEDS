/* 
 * File:   trab4.cpp
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
 * trabalho 4
 */
int main(int argc, char** argv) {

    int QTD = 1000;
    int opc, aux, j = QTD-1;
    int vect[QTD], i=0, escolha=0, count = 0, intervMaior, intervMenor, k;
    int find;
    //declaração das variáveis
    
    srand(time(NULL));
        
    for(i=0; i<QTD; i++){
    vect[i] = 100+rand()%100+1;
    }
    cout<<"Você possui o vetor:"<<endl;
        for (i=0; i<QTD; i++){
            cout<<vect[i]<<endl;
        }
    cout<<endl;
    i=0;
    //geração do vetor
    do{
    cout<<endl<<"\tEscolha uma das opções abaixo:"<<endl;
    cout<<"1- Informa a existência de um valor e sua posição"<<endl;
    cout<<"2- Informa quantas vezes um determinado valor aparece no vetor e suas posições"<<endl;
    cout<<"3- Conta quantas vezes os valores de um intervalo aparecem no vetor."<<endl;
    cout<<"4- Inverter a ordem dos valores do vetor."<<endl;
    cout<<"5- Retirar do vetor todas as ocorrências de um determinado valor."<<endl;
    cout<<"6- Retirar de um vetor todos os valores repetidos."<<endl;
    cout<<"0- Sair."<<endl<<endl;
    cout<<"Opção: ";
    cin>>opc;
    cout<<endl;
    switch(opc){
        case 1:
            cout<<"Escolha um número de 100 a 200 para verificação no vetor: ";
            cin>>escolha;
            cout<<endl;
            for(i=0; i < QTD; i++){
                if (vect[i] == escolha){
                    cout<<escolha<<" existe no vetor, e é o "<<i+1<<"° número representado no vetor."<<endl;
                    break;
                }
            }
            break;
            //verifica a existencia de um numero no vetor
        case 2:
            count = 0;
            cout<<"Escolha um número de 100 a 200 para verificação no vetor: ";
            cin>>escolha;
            cout<<endl;
            for(i=0; i < QTD; i++){
                if (vect[i] == escolha){
                    count++;
                }
            }
                cout<<escolha<<" aparece "<<count<<" vezes, nas posições: "<<endl;
            for(i=0; i < QTD; i++){
                if (vect[i] == escolha){
                    cout<<i+1<<endl;
                }
            }
            break;
            //conta a quantidade de aparencias de um elemento e indica suas posições
        case 3:
            count = 0;
            cout<<"Escolha o número limite do intervalo desejado: ";
            cin>>intervMaior;
            cout<<"Escolha o número mínimo do intervalo desejado: ";
            cin>>intervMenor;
            for (i=0; i<QTD; i++){
                if (vect[i]<= intervMaior and vect[i] >= intervMenor){
                    count++;
                }
            }
            cout<<"\nOs valores presentes entre "<<intervMaior<<" e "<<intervMenor<<" aparecem "<<count<<" vezes."<<endl;
            break;
            //recolhe a quantidade de elementos entre determinados valores
        case 4:
            for (i=0; i<QTD/2; i++){
                aux = vect[i];
                vect[i] = vect [j];
                vect[j] = aux;
                j--;
                }
            for (i=0; i<QTD; i++){
               cout<<vect[i]<<endl; 
            }
            break;
            //inverte a ordem do vetor
        case 5:
            cout<<"Digite o valor que deseja apagar do vetor: ";
            cin>>escolha;
            for (i=0;i<QTD;i++){
                if (vect[i]==escolha){
                    find = 1;
                }
            }
            if (find != 1 ){
                cout<<"Valor inexistente."<<endl;
            }

            for (i = 0; i<QTD; i++){
                if(vect[i] == escolha){
                    for(j=i; j< QTD ; j++){
                        vect[j] = vect[j+1];
                    }
                    QTD--;
                    i--;
                }
            }
            if (find == 1){
            for (i = 0; i<QTD; i++){
                cout<<vect[i]<<endl;
            }
            }
            break;
            //elimina todas as ocorrencias de determinado numero no vetor
        case 6: 
            for(i=0; i<QTD;i++){
                for (j= i+1; j<QTD; j++){
                    if (vect[i]== vect[j]){
                        for(k = j; k<QTD; k++){
                            vect[k]= vect[k+1];
                        }
                        QTD--;
                        j--;
                    }
                }
            }
            for (i = 0; i<QTD; i++){
                cout<<vect[i]<<endl;
            }
            break;
            //elimina todas as repetições de determinado numero
        case 0:
            break;
        default:
            cout<<"Opção inválida!"<<endl;
        }
    }while (opc != 0);
       
    return 0;
  
}
