/* 
 * File:   aula6.cpp
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

    int variavelint = 50;
    float variavelfloat = 50;
    long int variavelLI = 50;
    short int variavelSI = 50;
    unsigned int variavelUI = 50;
    double variaveldouble = 50;
    
    printf("\n\tTipos de Variáveis e Alocação de Memória \n\n");
    
    printf("\tVariável Inteira: \n");
    printf("\t\tValor Armazenado: %d\n", variavelint);
    printf("\t\tEndereço na Memória: %p\n", &variavelint);
    printf("\t\tQuantidade em bytes: %li\n\n", sizeof(int));
    
    printf("\tVariável Float: \n");
    printf("\t\tValor Armazenado: %f\n", variavelfloat);
    printf("\t\tEndereço na Memória: %p\n", &variavelfloat);
    printf("\t\tQuantidade em bytes: %li\n\n", sizeof(float));
    
    printf("\tModificadores: \n\n");
    
    printf("\tVariável Long Int: \n");
    printf("\t\tValor Armazenado: %d\n", variavelLI);
    printf("\t\tEndereço na Memória: %p\n", &variavelLI);
    printf("\t\tQuantidade em bytes: %li\n\n", sizeof(long int));
    
    printf("\tVariável Short Int: \n");
    printf("\t\tValor Armazenado: %d\n", variavelSI);
    printf("\t\tEndereço na Memória: %p\n", &variavelSI);
    printf("\t\tQuantidade em bytes: %li\n\n", sizeof(short int));
    
    printf("\tVariável Unsigned Int: \n");
    printf("\t\tValor Armazenado: %d\n", variavelUI);
    printf("\t\tEndereço na Memória: %p\n", &variavelUI);
    printf("\t\tQuantidade em bytes: %li\n\n", sizeof(unsigned int));
    
    printf("\tVariável Double: \n");
    printf("\t\tValor Armazenado: %f\n", variaveldouble);
    printf("\t\tEndereço na Memória: %p\n", &variaveldouble);
    printf("\t\tQuantidade em bytes: %li\n\n", sizeof(double));
    
    return 0;
}
