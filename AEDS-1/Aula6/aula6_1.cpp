/* 
 * File:   aula6_1.cpp
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

    int variavelint = 50, anterior, proximo;
    long int aLI, pLI;
    short int aSI, pSI;
    unsigned long int aULI, pULI;
    unsigned short int aUSI, pUSI;

    
    printf("\n\tTipos de Variáveis e Alocação de Memória \n\n");
    
    printf("\tVariável Inteira: \n");
    printf("\t\tValor Armazenado: %d\n", variavelint);
    printf("\t\tEndereço na Memória: %p\n", &variavelint);
    printf("\t\tQuantidade em bytes: %li\n\n", sizeof(int));
    
    anterior = -1;
    proximo = 0;
    while (proximo > anterior){
        anterior = proximo;
        proximo++;
    }
    
    aLI = -1;
    pLI = 0;
    while (pLI > aLI){
        aLI = pLI;
        pLI++;
    }
    
    aSI = -1;
    pSI = 0;
    while (pSI > aSI){
        aSI = pSI;
        pSI++;
    }
    
    aUSI = 1;
    pUSI = 2;
    while (pUSI > aUSI){
        aUSI = pUSI;
        pUSI++;
    }
    
    aULI = 1;
    pULI = 2;
    while (pULI > aULI){
        aULI = pULI;
        pULI++;
    }
    
    
    printf("\t\tInt:\n");
    printf("\tLimite Inferior: %d\n\tLimite Superior: %d\n", proximo, anterior);
    
    printf("\t\tLong Int:\n");
    printf("\tLimite Inferior: %d\n\tLimite Superior: %d\n", pLI, aLI);
    
    printf("\t\tShort Int:\n");
    printf("\tLimite Inferior: %d\n\tLimite Superior: %d\n", pSI, aSI);
    
    printf("\t\tUnsigned Long Int:\n");
    printf("\tLimite Inferior: %d\n\tLimite Superior: %d\n", pULI, aULI);
    
    printf("\t\tUnsigned Short Int:\n");
    printf("\tLimite Inferior: %d\n\tLimite Superior: %d\n", pUSI, aUSI);
    return 0;
}
