/* 
 * File:   main.cpp
 * Author: Miguel
 *
 * Created on 4 de março de 2024, 16:12
 */

#include <cstdlib>
#include <stdio.h>
#include <iostream>

using namespace std;

/*
 * teste
 */
int main(int argc, char** argv) {

    float nota1, nota2, nota3, result;

    
    
    printf("Digite a nota 1: ");
    scanf(" %f", &nota1);
    printf("\nDigite a nota 2: ");
    scanf(" %f", &nota2);
    printf("\nDigite a nota 3: ");
    scanf(" %f", &nota3);
    result = nota1*0.3+nota2*0.3+nota3*0.4;
    printf("\n-----------------------------------");
    printf("\n|                                 |");
    printf("\n|                                 |");
    printf("\n|             %.2f                |", result);
    printf("\n|                                 |");
    printf("\n|                                 |");
    printf("\n-----------------------------------");
    
    return 0;
}
