/* 
 * File:   main.cpp
 * Author: Miguel Leone - 2024.1.08.019
 *         Luís Felipe Barbosa Leite - 2024.1.08.018
 *
 * Created on 18 de junho de 2024
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

using namespace std;
typedef int tImagem[1000][1000];
string erro;


int carregaPGM(string nome, tImagem img, int *lin, int *col, int *tons) {

    string tipo;
    ifstream arquivo(nome);
    if (!arquivo.is_open()) {
        erro = "Erro: Arquivo não encontrado.";
        return 1;
    }

    arquivo >> tipo;
    if (tipo != "P2") {
        erro = "Erro: Arquivo não está no formato pgm.";
        return 2;
    }

    arquivo >> *col >> *lin >> *tons;
    for (int i = 0; i < *lin; i++) {
        for (int j = 0; j < *col; j++) {
            arquivo >> img[i][j];
        }
    }
    arquivo.close();
    return 0;
}

int salvaPGM(string nome, tImagem img, int lin, int col, int tons) {
    ofstream arquivo(nome);
    if (!arquivo.is_open()) {
        erro = "Erro: Arquivo não encontrado.";
        return 1;
    }

    arquivo << "P2" << endl << col << " " << lin << endl << tons << endl;
    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++) {
            arquivo << img[i][j] << " ";
        }
        arquivo << endl;
    }

    arquivo.close();
    return 0;
}

void negativa(tImagem img_entrada, tImagem img_saida,  int linhas, int colunas, int tons){
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            img_saida[i][j] = tons - img_entrada[i][j];
        }
    }
}

void brilho(tImagem img_entrada, tImagem img_saida, int linhas,
        int colunas, int tons, int fator){
    
    int aux;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            aux = img_entrada[i][j] + fator;
            if (aux < 0) {
                aux = 0;
            } else if (aux > tons) {
                aux = tons;
            }
            img_saida[i][j] = aux;
        }
    }
}

void binarizar(tImagem entrada, tImagem saida, int lin, int col, int tons, int numero) {

    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++) {
            if (entrada[i][j] < numero)
                saida[i][j] = 0;
            else if (entrada[i][j] >= numero)
                saida[i][j] = tons;
        }
    }
}

void iconizar(tImagem img_entrada, tImagem img_saida, int *linhas, int *colunas) {
    int fator_linhas = (*linhas) / 64;
    int fator_colunas = (*colunas) / 64;
    int media = 0;
    if (fator_linhas < 1) {
        fator_linhas = 1;
    }
    if (fator_colunas < 1) {
        fator_colunas = 1;
    }
    for (int i = 0; i < *linhas; i = i + fator_linhas) {
        for (int j = 0; j < *colunas; j = j + fator_colunas) {
            media = 0;
            for (int k = i; k < i + fator_linhas; k++) {
                for (int l = j; l < j + fator_colunas; l++) {
                    media = media + img_entrada[k][l];
                }
            }
            media = media / (fator_linhas * fator_colunas);
            img_saida[i / fator_linhas][j / fator_colunas] = media;
        }
    }
}

void ruido(tImagem entrada, tImagem saida, int lin, int col){
    
    srand(7); 
    
    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++) {
            if (rand() % 20 == 0) { 
                saida[i][j] = rand() % 256; 
            } else {
                saida[i][j] = entrada[i][j]; 
            }
        }
    }

}

void blurr(tImagem img_entrada, tImagem img_saida, int *linhas, int *colunas) {
    int soma = 0; 
    for (int i = 1; i < *linhas - 1; i++) {
        for (int j = 1; j < *colunas - 1; j++) {
            soma = 0;
            for (int k = i - 1; k <= i + 1; k++) {
                for (int l = j - 1; l <= j + 1; l++) {
                    soma = soma + img_entrada[k][l];
                }
            }
            img_saida[i][j] = soma / 9;
        }
    }
    for (int i = 0; i < *colunas; i++) {
        img_saida[0][i] = img_entrada[0][i];
        img_saida[*linhas - 1][i] = img_entrada[*linhas - 1][i];
    }
    for (int j = 0; j < *linhas; j++) {
        img_saida[j][0] = img_entrada[j][0];
        img_saida[j][*colunas - 1] = img_entrada[j][*colunas - 1];
    }
}

int main(void) {
    
    tImagem imgEntrada, imgSaida;
    string arqEntrada, arqSaida;
    int coluna, linha, cinza, filtro;

    cout << " Entre com o nome da imagem de entrada: ";
    cin >> arqEntrada;
    arqEntrada = arqEntrada + ".pgm";
    if (carregaPGM(arqEntrada, imgEntrada, &linha, &coluna, &cinza) != 0) {
        cout << "\n" + erro + "\n";
        return 1;
    }

    cout << "\n Escolha o filtro para aplicar à imagem: " << endl;
    cout << " 1- Esclarecer/escurecer" << endl;
    cout << " 2- Binarizar" << endl;
    cout << " 3- Negativa" << endl;
    cout << " 4- Iconizar" << endl;
    cout << " 5- Ruídos" << endl;
    cout << " 6- Filtro (blurr)" << endl << endl << " ";
    cout << "Opção: ";
    

    cin >> filtro;
    if (filtro == 1) {
        int esclarecer;
        cout << "\n Digite o quanto quer esclarecer a imagem, lembrando, se o número for negativo, irá escurecer a imagem: ";
        cin >> esclarecer;
        brilho(imgEntrada, imgSaida, linha, coluna, cinza, esclarecer);
    } else if (filtro == 2) {
        int limiar;
        cout << "\n Digite o valor para binarizar a imagem: ";
        cin >> limiar;
        binarizar(imgEntrada, imgSaida, linha, coluna, cinza, limiar);
    } else if (filtro == 3) {
        negativa(imgEntrada, imgSaida, linha, coluna, cinza);
    } else if (filtro == 4) {
        iconizar(imgEntrada, imgSaida, &linha, &coluna);
    } else if (filtro == 5) {
        ruido(imgEntrada, imgSaida, linha, coluna);
    } else if (filtro == 6){
        blurr(imgEntrada, imgSaida, &linha, &coluna);
    }
    

    cout << "\n Entre com o nome da imagem de saída: ";
    cin >> arqSaida;
    arqSaida = arqSaida + ".pgm";
    if (salvaPGM(arqSaida, imgSaida, linha, coluna, cinza) != 0) {
        cout << "\n" + erro + "\n";
        return 1;
    }

    return 0;
}
