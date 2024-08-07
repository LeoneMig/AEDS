/* 
 * File:   aula_inv2.cpp
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
 * aula invertida 2
 */
int main(int argc, char** argv) {

    int conjunto1[10] = {5, 4, 2, 5, 3, 2, 4, 8, 2, 9};
    int conjunto2[10] = {7, 1, 12, 10, 9, 2, 8, 1, 2, 7};
    
    int tam1 = 10, tam2 = 10, tam3;
    int i, p, j;
    
    cout << "Operações em conjuntos de valores." << endl;
    cout<<"Removendo valores repetidos: "<<endl;
    
    for(i = 0; i < tam1; i++){
        for(j = i+1; j <= tam1; j++ ){
            if(conjunto1[i] == conjunto1[j] ){
                for (p = j; p < tam1; p++){
                    conjunto1[p] = conjunto1[p+1];
                    }
                tam1--;
                j--;
                }
            }
        }
                
    for (int i = 0; i < tam1; i++){
    cout<<conjunto1[i]<<endl;
    }
    cout<<endl;
    for(i = 0; i < tam2; i++){
        for(j = i+1; j <= tam2; j++ ){
            if(conjunto2[i] == conjunto2[j] ){
                for (p = j; p < tam1; p++){
                    conjunto2[p] = conjunto2[p+1];
                    }
                tam2--;
                j--;
                }
            }
        }
                
    for (i = 0; i <= tam2; i++){
    cout<<conjunto2[i]<<endl;
    }
    cout<<endl;
    cout<<"União entre os vetores: "<<endl;
    
    tam3 = tam1 + tam2;
    int conjunto3[tam3];
    
    for(i = 0; i < tam3; i++){
        if(i < tam1){
            for(j = 0; j < tam1; j++){
              conjunto3[j] = conjunto1[j];
              i++;
            }
        }
        if(i >= tam2){
            for(j = 0; j <= tam2; j++){
              conjunto3[i] = conjunto2[j];
              i++;
            }
        }
    }
    
    for (i = 0; i <= tam3; i++){
    cout<<conjunto3[i]<<endl;
    }
    cout<<endl;
    cout<<"Intersecção entre os vetores 1 e 2: "<<endl;
    
    int conjunto4[tam3];
    
  
    for(i = 0; i < tam3; i++){
        for(j = i+1; j <= tam3; j++ ){
            if(conjunto3[i] == conjunto3[j] ){
                conjunto4[i] = conjunto3[j];
                }else {
                conjunto4[j-1] = 0;
                }
                
            }
        }
    
    for (i = 0; i < tam3; i++){
        if(conjunto4[i] == 0){
            for (j = i; j < tam3; j++){
                conjunto4[j] = conjunto4[j+1];
            }
            tam3--;
            i--;
        }
    }
    
    for (i = 0; i < tam3; i++){
    cout << conjunto4[i] << endl;
    }
    
    return 0;
}