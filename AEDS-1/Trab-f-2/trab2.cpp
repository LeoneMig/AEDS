/* 
 * File:   trab2.cpp
 * Author: Miguel Leone - 2024.1.08.019
 *
 * Created on 12 de março de 2024, 17:17
 */

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <cmath>


using namespace std;

/*
 * trabalho 2
 */
int main(int argc, char** argv) {

  const int QTD = 1000;
  int i=0;
  float soma=0, media=0, maior=0, menor=5.0, altura[QTD], desvio = 0, pct = 0, maior_media = 0;
  srand(time(NULL));
  while (i < QTD){
    altura[i] = 1.5 + (rand() % (230 + 1 - 150) / 100.0); //gerando alturas aleatórias/
    soma = soma + altura[i];
    if (altura[i] > maior){
      maior = altura[i]; //recebendo a maior altura/
    }
    if (altura[i] < menor){
      menor = altura[i]; //recebendo a menor altura/
    }
    if (altura[i] > 2){
      pct++; //contando as alturas maiores que 2 metros/
    }
    i++;
  }
  media = soma/QTD;  //calculando a média das alturas/


  for (i = 0; i < QTD; i++){
    desvio = desvio + ((altura[i] - media)*(altura[i] - media)); //calculando o desvio padrão/
    if (altura[i] > media){
      maior_media++; //contando as alturas maiores que a média/
    }
  }

  desvio = sqrt(desvio/QTD); //terminando o calculo do desvio padrão
  pct = (pct/QTD)*100; //terminando o calculo das porcentagens
  maior_media = (maior_media/QTD)*100; //calculando os numeros maiores que a media
  
  cout<<"A média das alturas é: "<<media<<endl;
  cout<<"A maior altura é: "<<maior<<endl;
  cout<<"A menor altura é: "<<menor<<endl;
  cout<<"O desvio padrão das alturas é: "<<desvio<<endl;
  cout<<"A porcentagem de pessoas com altura maior que 2 metros é: "<<pct<<"%"<<endl;
  cout<<"A porcentagem de pessoas com altura maior que a média é: "<<maior_media<<"%"<<endl;
  
return 0;     
}
