/* 
 * File:   aula6_2.cpp
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

    unsigned char codigoASCII = 0;

    
    printf("\n\tTipos de Variáveis e Alocação de Memória \n\n");
    
    printf("\tTabela ASCII: \n");
    
    codigoASCII = 0;
    while (codigoASCII < 255){
        printf("\t\tCaracter: %c", codigoASCII);
        printf("\t\tCódigo: %d\n", codigoASCII);
        codigoASCII++;
    }
    
    
    
    
    
    
    return 0;
}
