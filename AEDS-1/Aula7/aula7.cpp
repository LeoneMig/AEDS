/* 
 * File:   aula7.cpp
 * Author: Miguel
 *
 * Created on 4 de março de 2024, 16:12
 */

#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include <time.h>

using namespace std;

/*
 * teste
 */
int main(int argc, char** argv) {

    int segredo, chute;
    
    srand(time(NULL));
    segredo = 1+rand()%100;
    cout<<"Número aleatório gerado."<<endl;
    cout<<"Chute um número entre 0 e 100: ";
    cin>>chute;
    
    
    while (chute != segredo){
        if (chute > segredo){
            cout<<endl<<"Valor do segredo é menor que "<<chute<<"."<<endl;
            cout<<"Chute um número mais baixo: ";
            
        }
        else {
            cout<<endl<<"Valor do segredo é maior que "<<chute<<"."<<endl;
            cout<<"Chute um número mais alto: ";   
        }
        cin>>chute;
    }
    
    cout<<endl<<"O valor é: "<<segredo<<endl;
    
    
    
    
    return 0;
}
