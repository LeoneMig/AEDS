/* 
 * File:   aula12.cpp
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
 * gerar um vetor com números aleatórios e não repetidos
 */

int main(int argc, char** argv) {
    
    const int QTD = 10;
    int segredo[QTD], qtde = 0, x = 0;
    
    srand(time(NULL));
    for (qtde = 0; qtde < QTD; qtde++){
        segredo[qtde] = -1;
    }
    
    for(int i = 0; i < QTD; i++){
        qtde = rand()%QTD;
        if(segredo[qtde] == -1){
            if(x < QTD){
                segredo[qtde] = x;
            }
            x++;
        }else 
            i--;
    }
    
    for (qtde = 0; qtde < QTD; qtde++){
        cout<<segredo[qtde]<<endl;
    }
    
    ofstream arquivo2("numeros.txt");
    if(!arquivo2.is_open()){
        cout<<"Erro: arquivo inexistente."<<endl;
        return 1;
    }
    
    for (int i = 0 ;i < QTD; i++){
        arquivo2<<segredo[i]<<"\n";
    }
    arquivo2.close();
    return 0;
}
