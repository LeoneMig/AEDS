/* 
 * File:   main.cpp
 * Author: Miguel
 *
 * Created on 4 de março de 2024, 16:12
 */

#include <cstdlib>
#include <stdio.h>
#define PI 3.14159265359

using namespace std;

/*
 * calculadora de IMC
 */
int main(int argc, char** argv) {

    float peso, altura, result_imc;
    
    
    printf("Digite o peso (kg): ");
    scanf(" %f", &peso);
    while (peso < 0 || peso > 700){
        printf("\nDigite o peso corretamente.");
        printf("\nDigite o peso (kg): ");
        scanf(" %f", &peso); 
    }
    printf("\nDigite a altura (m): ");
    scanf(" %f", &altura);
    while (altura < 0.55 || altura > 2.5){
        printf("\nDigite a altura corretamente.");
        printf("\nDigite a altura(m): ");
        scanf(" %f", &altura); 
    }
    
    result_imc = peso/(altura * altura);
    
    printf("\n\tO resultado do IMC é: %.2f\n", result_imc);
    
    if (result_imc <= 18.5)
    {
        printf("\n\tAbaixo do peso\n");
    }  
    else 
        if (result_imc < 24.9)
        {
            printf("\n\tPeso ideal\n");
        }
        else 
            if (result_imc < 29.9)
            {
                printf("\n\tLevemente acima do peso\n");
            }
            else 
                if (result_imc < 34.9)
                {
                    printf("\n\tObesidade grau 1\n");
                }
                else 
                {
                    printf("\n\tObesidade severa\n");
                    printf("\tProcure um médico\n");
                }
    
    
    
    
    return 0;
}
