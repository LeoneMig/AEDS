/* 
 * File:   trab1.cpp
 * Author: Miguel Leone - 2024.1.08.019
 *
 * Created on 12 de março de 2024, 17:17
 */

#include <cstdlib>
#include <stdio.h>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float lado1, lado2, lado3;
    
    printf("Digite o valor do lado 1: ");
    scanf(" %f", &lado1);
    while (lado1 <= 0){
        printf("Digite o valor do lado 1 corretamente: ");
        scanf(" %f", &lado1);
    }  
    
    printf("Digite o valor do lado 2: ");
    scanf(" %f", &lado2);
    while (lado2 <= 0){
        printf("Digite o valor do lado 2 corretamente: ");
        scanf(" %f", &lado2);
    } 
    
    printf("Digite o valor do lado 3: ");
    scanf(" %f", &lado3);
    while (lado3 <= 0){
        printf("Digite o valor do lado 3 corretamente: ");
        scanf(" %f", &lado3);
    } 
    
    if (lado1 + lado2 >= lado3 && lado2 + lado3 >= lado1 && lado1 + lado3 >= lado2 ){
        if (lado1 == lado2 && lado1== lado3){
            printf("\n\tTriângulo equilátero!\n");
        }
        else {
            if ((lado1 == lado2 && lado1 != lado3) || (lado1 == lado3 && lado1 != lado2) || (lado3 == lado2 && lado1 != lado3)){
                printf("\n\tTriângulo isosceles!\n");
                if ((lado1 * lado1) == (lado2 * lado2) + (lado3 * lado3) || (lado2 * lado2) == (lado1 * lado1) + (lado3 * lado3) || (lado3 * lado3) == (lado2 * lado2) + (lado1 * lado1)){
                printf("\n\tTriângulo retângulo!\n");
                }}}
            if (lado1 != lado2 && lado1!= lado3 && lado2 != lado3){
             printf("\n\tTriângulo escaleno!\n");
                if ((lado1 * lado1) == (lado2 * lado2) + (lado3 * lado3) || (lado2 * lado2) == (lado1 * lado1) + (lado3 * lado3) || (lado3 * lado3) == (lado2 * lado2) + (lado1 * lado1)){
                    printf("\n\tTriângulo retângulo!\n");
            }}
    }
    else {
        printf("\n\tOs lados informados não formam nenhum triângulo.");
    }

    return 0;
}

