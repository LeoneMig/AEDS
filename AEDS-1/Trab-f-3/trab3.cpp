/* 
 * File:   trab3.cpp
 * Author: Miguel Leone - 2024.1.08.019
 *
 * Created on 12 de março de 2024, 17:17
 */

#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <math.h>
#include <fstream>


using namespace std;

/*
 * trabalho 3
 */
int main(int argc, char** argv) {

    string obj;
    float lado1, lado2, lado3, raio, altura, area, volume, geratriz;
    float PI = 3.14;
    
    ifstream arquivo("cenagrafica2.txt");
    if(!arquivo.is_open()){
        cout<<"Erro: arquivo inexistente."<<endl;
        return 1;
    }
    arquivo >> obj;
    while(obj != "fim"){
        if (obj == "cubo"){
           arquivo >> lado1;
           area = 6.0*(lado1*lado1);
           volume = lado1*lado1*lado1;
           cout<<obj<<" de lado igual a "<<lado1<<", tem area igual a "<<area<<" e volume igual a "<<volume<<endl<<endl;
        }
        if (obj == "esfera"){
            arquivo >> raio;
            area = pow(raio, 2)*4.0*PI;
            volume = pow(raio, 3)*4/3*PI;
            cout<<obj<<" de raio igual a "<<raio<<", tem area igual a "<<area<<" e volume igual a "<<volume<<endl<<endl;
        }
        if (obj == "quadrado"){
            arquivo >> lado1;
            area = pow(lado1, 2);
            cout<<obj<<" de lado igual a "<<lado1<<", tem area igual a "<<area<<endl<<endl;
        }
        if (obj == "circulo"){
            arquivo >> raio;
            area = pow(raio, 2)*PI;
            cout<<obj<<" de raio igual a "<<raio<<", tem area igual a "<<area<<endl<<endl;
        }
        if (obj == "retangulo"){
            arquivo >> lado1;
            arquivo >> lado2;
            area = lado1*lado2;
            cout<<obj<<" de lados iguais a "<<lado1<<" e "<<lado2<<", tem area igual a "<<area<<endl<<endl;
        }
        if (obj == "paralelepipedo"){
            arquivo >> lado1;
            arquivo >> lado2;
            arquivo >> lado3;
            area = (2*lado1*lado2)+(2*lado1*lado3)+(2*lado2*lado3);
            volume = lado1*lado2*lado3;
            cout<<obj<<" de lados iguais a "<<lado1<<", "<<lado2<<" e "<<lado3<<", tem area igual a "<<area<<" e volume igual a "<<volume<<endl<<endl;
        }
        if (obj == "cilindro"){
            arquivo >> raio;
            arquivo >> altura;
            area = 2*raio*(raio + altura)*PI;
            volume = pow(raio, 2)*altura*PI;
            cout<<obj<<" de raio igual a "<<raio<<" e altura igual a "<<altura<<", tem area igual a "<<area<<" e volume igual a "<<volume<<endl<<endl;
        }
        if (obj == "cone"){
            arquivo >> raio;
            arquivo >> altura;
            geratriz = pow(raio, 2) + pow(altura, 2);
            geratriz = sqrt(geratriz);
            area = raio*(raio+geratriz)*PI;
            volume = (pow(raio, 2)*altura*PI)/3;
            cout<<obj<<" de raio igual a "<<raio<<", altura igual a "<<altura<<" e geratriz igual a "<<geratriz<<", tem area igual a "<<area<<" e volume igual a "<<volume<<endl<<endl;
        }
        if (obj == "triangulo"){
            arquivo >> lado1;
            arquivo >> altura;
            area = lado1*altura/2;
            cout<<obj<<" de base igual a "<<lado1<<" e altura igual a "<<altura<<", tem area igual a "<<area<<endl<<endl;
        }
        
        arquivo >> obj;
    }

    
    return 0;
}
