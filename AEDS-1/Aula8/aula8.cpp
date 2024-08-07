/* 
 * File:   aula8.cpp
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
 * aula
 */
int main(int argc, char** argv) {

    string obj;
    float lado1, lado2, lado3, raio, altura, area, volume, geratriz;
    float PI = 3.14;
    int opc;
    
    ofstream arquivo("cenagrafica2.txt");
    if(!arquivo.is_open()){
        cout<<"Erro: arquivo inexistente."<<endl;
        return 1;
    }
    
    
    do {
        cout<<"\tEscolha uma das figuras para ser representada:"<<endl<<endl<<"\t\t\tSelecione:"<<endl<<endl<<"1-Cubo\t2-Quadrado\t3-Triângulo\t4-Esfera\t5-Retângulo\t6-Circulo\t7-Cilindro\t8-Cone\t9-Paralelepípedo\t0-Sair"<<endl<<endl;
        cout<<"Opção:";
        cin>>opc;
        cout<<endl;
        switch(opc){
            case 1:
                arquivo<<"cubo\t";
                cout<<"Digite o valor do lado: ";
                cin>>lado1;
                arquivo<<lado1<<endl;
                cout<<endl<<endl;
                break;
            case 2:
                arquivo<<"quadrado\t";
                cout<<"Digite o valor do lado: ";
                cin>>lado1;
                arquivo<<lado1<<endl;
                cout<<endl<<endl;
                break;
            case 3:
                arquivo<<"triangulo\t";
                cout<<"Digite o valor da base: ";
                cin>>lado1;
                arquivo<<lado1<<"\t";
                cout<<"\nDigite o valor da altura: ";
                cin>>altura;
                arquivo<<altura<<endl;
                cout<<endl<<endl;
                break;
            case 4:
                arquivo<<"esfera\t";
                cout<<"Digite o valor do raio: ";
                cin>>raio;
                arquivo<<raio<<endl;
                cout<<endl<<endl;
                break;
            case 5:
                arquivo<<"retangulo\t";
                cout<<"Digite o valor do lado 1: ";
                cin>>lado1;
                arquivo<<lado1<<"\t";
                cout<<"\nDigite o valor do lado 2: ";
                cin>>lado2;
                arquivo<<lado2<<endl;
                cout<<endl<<endl;
                break;
            case 6:
                arquivo<<"circulo\t";
                cout<<"Digite o valor do raio: ";
                cin>>raio;
                arquivo<<raio<<endl;
                cout<<endl<<endl;
                break;
            case 7:
                arquivo<<"cilindro\t";
                cout<<"Digite o valor do raio: ";
                cin>>raio;
                arquivo<<raio<<"\t";
                cout<<"\nDigite o valor da altura: ";
                cin>>altura;
                arquivo<<altura<<endl;
                cout<<endl<<endl;
                break;
            case 8:
                arquivo<<"cone\t";
                cout<<"Digite o valor do raio: ";
                cin>>raio;
                arquivo<<raio<<"\t";
                cout<<"\nDigite o valor da altura: ";
                cin>>altura;
                arquivo<<altura<<endl;
                cout<<endl<<endl;
                break;
            case 9:
                arquivo<<"paralelepipedo\t";
                cout<<"Digite o valor do lado 1: ";
                cin>>lado1;
                arquivo<<lado1<<"\t";
                cout<<"\nDigite o valor do lado 2: ";
                cin>>lado2;
                arquivo<<lado2<<"\t";
                cout<<"\nDigite o valor do lado 3: ";
                cin>>lado3;
                arquivo<<lado3<<endl;
                cout<<endl<<endl;
                break;
            case 0:
                arquivo<<"fim";
                break;
            default:
                cout<<"OPÇÃO INVÁLIDA"<<endl;    
        }
    }while(opc != 0);
       
    return 0;
  
}
