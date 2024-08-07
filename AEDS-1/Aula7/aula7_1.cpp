/* 
 * File:   aula7_1.cpp
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

    int segredo, i = 0; 
    float soma = 0;
    srand(time(NULL));
        
    while (i < 100){
    segredo = 1+rand()%200;
    soma = soma + segredo;
    i++;
    }
    
    cout<<soma;
    soma = soma/100;
    
    cout<<endl<<"A média dos valores é: "<<soma<<endl;
    
    
    
    
    return 0;
}
