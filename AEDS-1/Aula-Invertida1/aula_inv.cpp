/* 
 * File:   aula_inv.cpp
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
 * aula invertida
 */
int main(int argc, char** argv) {
    
    int i = 0, k = 0,  QTD = 60;
    char nome[30], sobrenome[30], nomecompleto[QTD], procura[30];
    
    
    nome[0] = 'm';
    nome[1] = 'i';
    nome[2] = 'g';
    nome[3] = 'u';
    nome[4] = 'e';
    nome[5] = 'l';
    nome[6] = '\0';

    printf("\n Nome: %s.\n", nome);

    sobrenome[0] = 'l';
    sobrenome[1] = 'e';
    sobrenome[2] = 'o';
    sobrenome[3] = 'n';
    sobrenome[4] = 'e';
    sobrenome[5] = '\0';

    printf("\n Sobrenome: %s.\n", sobrenome);

    for (i=0; nome[i]!= '\0'; i++){
          nomecompleto[i]=nome[i]; 
    }
    
    if (nome[i] == '\0'){
        nomecompleto[i] = ' ';
        i++;
    }
    
    for (k=0; sobrenome[k]!= '\0'; k++){
        nomecompleto[i] = sobrenome[k];
        i++;
    }
    
    nomecompleto[i] = '\0';
    
    cout<<endl<<" Nome completo: "<<nomecompleto<<endl;
    
    for (i=0; nomecompleto[i]!= '\0'; i++){
        if(nomecompleto[i]>= 97  && nomecompleto[i]<= 122){
            nomecompleto[i] = nomecompleto[i] - 32;
        }
    }
    
    cout<<endl<<" Nome completo (maiúsculo): "<<nomecompleto<<endl;
    
    for (i=1; nomecompleto[i]!= '\0'; i++){
        if(nomecompleto[i]>= 65  && nomecompleto[i]<= 90){
            nomecompleto[i] = nomecompleto[i] + 32;
        }
        if (nomecompleto[i] == ' '){
            i++;
        }
    }
    
    cout<<endl<<" Nome completo (com minúsculas): "<<nomecompleto<<endl;
    
    for (i=0; nomecompleto[i]!= '\0'; i++){
        if (nomecompleto[i] == ' '){
           for(int j=i; j < QTD ; j++){
                        nomecompleto[j] = nomecompleto[j+1];
                    }
                    QTD--;
                    i--;
        }
    }
    
    cout<<endl<<" Nome completo (sem espaço): "<<nomecompleto<<endl;
    
    cout<<endl<<" Qual nome deseja procurar no vetor: ";
    cin>>procura;
    
    // não consegui implementar o ultimo requisito

    return 0;
}