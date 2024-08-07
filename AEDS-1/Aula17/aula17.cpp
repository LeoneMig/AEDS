/* 
 * File:   aula16.cpp
 * Author: Miguel Leone - 2024.1.08.019
 *
 */

// Operações com matrizes

#include <cstdlib>
#include <string>
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <math.h>
#include <fstream>
#include "matrizes.h"

using namespace std;

/*
 *  matrizes
 */


int main(){

    const int L = 2, C = 3;
    Tmat mat1;
    Tmat mat2;
    Tmat mat3;
    int a = 0;
    
    cria(mat1, L, C,
         mat2, L, C);
    
    soma(mat1, L, C,
         mat2, L, C,
         mat3, L, C);
    
    subtrai(mat1, L, C,
         mat2, L, C,
         mat3, L, C);
    
    return 0;
}
