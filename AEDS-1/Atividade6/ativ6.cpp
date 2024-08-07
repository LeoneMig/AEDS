/* 
 * File:   ativ6.cpp
 * Author: Miguel Leone - 2024.1.08.019
 *
 */

#include <cstdlib>
#include <string>
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <math.h>
#include <fstream>
#include "sorts.h"

using namespace std;

/*
 *  atividade 6
 *  utilizando sorts e contando suas alterações no vetor
 */


int main(int argc, char** argv) {

    const int QTD = 10;
    int v[QTD];
    int contB = 0, contI = 0, contS = 0;
    
    vector(QTD, v);
    

    cout<<"BUBBLESORT:"<<endl;
    bubblesort(v, QTD, contB);
    cout<<endl<<endl;

    cout<<"INSERTIONSORT:"<<endl;
    insertionsort(v, QTD, contI);
    cout<<endl<<endl;

    cout<<"SELECTIONSORT:"<<endl;
    selectionsort(v, QTD, contS);
    cout<<endl<<endl;


    return 0;
}
