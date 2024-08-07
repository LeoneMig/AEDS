/* 
 * File:   main.cpp
 * Author: Miguel
 *
 * Created on 4 de março de 2024, 16:12
 */

#include <cstdlib>
#include <stdio.h>

using namespace std;

/*
 * teste
 */
int main(int argc, char** argv) {

    float nota1, nota2, notaTrab, result;
    
    
    printf("Digite a nota 1: ");
    scanf(" %f", &nota1);
    while (nota1 < 0 || nota1 > 10){
        printf("\nValor não está nos parâmetros corretos (0-10).");
        printf("\n\nDigite a nota 1 corretamente: ");
        scanf(" %f", &nota1);
    }
    printf("\nDigite a nota 2: ");
    scanf(" %f", &nota2);
    while (nota2 < 0 || nota2 > 10){
        printf("\nValor não está nos parâmetros corretos (0-10).");
        printf("\n\nDigite a nota 2 corretamente: ");
        scanf(" %f", &nota2);
    }
    printf("\nDigite a nota do trabalho: ");
    scanf(" %f", &notaTrab);
    while (notaTrab < 0 || notaTrab > 10){
        printf("\nValor não está nos parâmetros corretos (0-10).");
        printf("\n\nDigite a nota do trabalho corretamente: ");
        scanf(" %f", &notaTrab);
    }
    result = nota1*0.3+nota2*0.3+notaTrab*0.4;
   
    printf("\n-----------------------------------");
    printf("\n|                                 |");
    printf("\n|                                 |");
    printf("\n|             %.2f                |", result);
    printf("\n|                                 |");
    printf("\n|                                 |");
    printf("\n-----------------------------------");

    if (result >= 6){
        printf("\n\tAprovado!\n");
    }
    else {
        printf("\n\tReprovado!\n");
    }
    return 0;
}
