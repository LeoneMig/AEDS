/* 
 * File:   cal_med_alt.cpp
 * Author: Miguel
 *
 * Created on 4 de março de 2024, 16:12
 */

#include <cstdlib>
#include <stdio.h>
#include <iostream>

using namespace std;

/*
 * calculadora da media de alturas
 */
int main(int argc, char** argv) {

    float altura;
    float result = 0.0;
    int qtd;
    int i = 0;
    
    
    printf("Quantas pessoas serão analisadas: ");
    scanf(" %d", &qtd);
    
    while (i < qtd){
        printf("\nDigite a %d° altura: ", i+1);
        scanf(" %f", &altura);
        while (altura < 0.55 || altura > 2.5){
            printf("\nDigite a altura corretamente.");
            printf("\nDigite a %d° altura (m): ", i+1);
            scanf(" %f", &altura);
        }   
        result += altura;
        i++;
     
    }
    result = (result / qtd);  
    
    printf("\nA média das alturas equivale a : %.2f metros", result);
    
    return 0;
    /*
    cout<<"Quantas pessoas serão anlisdas? ";
    cin>>qtd;
            
        
    while (i < qtd){
         cout<<"\nDigite a " <<i+1<<"° altura (m): ";
         cin>>altura;
     while (altura < 0.55 || altura > 2.5){
         cout<<"\nDigite a altura corretamente.";
         cout<<"\nDigite a " <<i+1<<"° altura (m): ";
         cin>>altura;
     }   
        result = result + altura;
        i++;
     
    }
    result = (result / qtd);
    
    cout<<"\nA média das alturas equivale a : "<<result<<" metros";
    
     */
}
