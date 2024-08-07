/* 
 * File:   table.cpp
 * Author: Miguel
 *
 * Created on 4 de março de 2024, 16:12
 */

#include <cstdlib>
#include <stdio.h>
#include <iostream>

using namespace std;

/*
 * calculadora da media de alturas
 */
int main(int argc, char** argv) {

    int celsius = 0;
    int fahren;
 
    while (celsius <= 100){
        fahren = (celsius * 1.8) + 32;
        cout<<"\t"<<celsius<<" graus celsius representam "<<fahren<<" graus fahrenheit\n";
        celsius = celsius + 5;
    }
   
    return 0;
}
