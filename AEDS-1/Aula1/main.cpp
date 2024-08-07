/* 
 * File:   main.cpp
 * Author: Miguel
 *
 * Created on 4 de março de 2024, 16:12
 */

#include <cstdlib>
#include <stdio.h>
#define PI 3.14

using namespace std;

/*
 * calculadora de cilindros
 */
int main(int argc, char** argv) {

    float raio, altura, result_at, result_v;
    
    
    printf("Digite o raio da base: ");
    scanf(" %f", &raio);
     while (raio < 0){
        printf("\nDigite o raio corretamente.");
        printf("\nDigite o raio da base: ");
        scanf(" %f", &raio); 
    }
    printf("\nDigite a altura: ");
    scanf(" %f", &altura);
     while (altura < 0){
        printf("\nDigite a altura corretamente.");
        printf("\nDigite a altura: ");
        scanf(" %f", &altura); 
    }

    result_at = 2*PI*raio*(raio + altura); /* calculo da area total */
    result_v = raio*raio*altura*PI; /* calculo do volume total */
    
    printf("\nA área total equivale a: %.2f", result_at);
    printf("\no volume total equivale a: %.2f", result_v);
    
    return 0;
}
