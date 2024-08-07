/* 
 * File:   trab_s_01.cpp
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

using namespace std;

/*
 * trabalho semestral 1
 */

typedef struct{                 
    string modelo;
    string marca;
    string tipo;
    int ano;
    int km;
    string pot_mot;
    string combustivel;
    string cambio;
    string direcao;
    string cor;
    string portas;
    string placa;
    float valor;
    bool valido;
} Veiculo;

int main(int argc, char** argv) {
    
    const int QTD = 100, qtdePrest = 60;
    const float tax = 1.35/100, tax_seg = 7.0/100;
    Veiculo listagem[QTD];
    int qtde = 0, opc, exclui, ajuda, ajuda2 = 0, ajuda3 = 0, carro_ano = 0, qtdeExclui = 0;
    float valueMax = 0.0, valueMin = 0.0, relat_bat = 10000000.0, v_prest = 0.0, v_seg = 0.0, relat_caro = 0.0, medkm = 0.0, pot = 0.0;
    string busca, aux;
    float type1 = 0, type2 = 0, type3 = 0, type4 = 0, type5 = 0, type6 = 0, gas = 0, diesel = 0, flex = 0;
    
    
    ifstream arquivo("BD_veiculos.txt");
    if(!arquivo.is_open()){
        cout<<"Erro: arquivo inexistente."<<endl;
        return 1;
    }
    
    arquivo>>aux;
    for (qtde = 0; aux != "fim"; qtde++){
        
        listagem[qtde].modelo = aux;
        arquivo>>listagem[qtde].marca;
        arquivo>>listagem[qtde].tipo;
        arquivo>>listagem[qtde].ano;
        arquivo>>listagem[qtde].km;
        arquivo>>listagem[qtde].pot_mot;
        arquivo>>listagem[qtde].combustivel;
        arquivo>>listagem[qtde].cambio;
        arquivo>>listagem[qtde].direcao;
        arquivo>>listagem[qtde].cor;
        arquivo>>listagem[qtde].portas;
        arquivo>>listagem[qtde].placa;
        arquivo>>listagem[qtde].valor;
        listagem[qtde].valido = true;
        arquivo>>aux;
    }arquivo.close();
    
    do{
        cout<<"\tMENU"<<endl;
        cout<<"Escolha a opção desejada:"<<endl;
        cout<<"1- Adicionar um veículo a base de dados."<<endl;
        cout<<"2- Buscar veículo pela placa."<<endl;
        cout<<"3- Buscar veículo pelo tipo."<<endl;
        cout<<"4- Buscar veículo pelo câmbio."<<endl;
        cout<<"5- Buscar veículo por faixa de preço."<<endl;
        cout<<"0- Gerar relatório."<<endl;
        cout<<"Opção: ";
        cin>>opc;
        switch(opc){
            case 1:
                for (int i = 0; i < QTD; i++){
                    if (listagem[i].valido == false){
                        ajuda=i;
                        break;
                    }
                }
                
                        cout<<"Modelo: ";
                        cin>>listagem[ajuda].modelo;
                        cout<<"Marca: ";
                        cin>>listagem[ajuda].marca;
                        cout<<"Tipo: ";
                        cin>>listagem[ajuda].tipo;
                        cout<<"Ano: ";
                        cin>>listagem[ajuda].ano;
                        cout<<"Quilometragem: ";
                        cin>>listagem[ajuda].km;
                        cout<<"Potência do motor: ";
                        cin>>listagem[ajuda].pot_mot;
                        cout<<"Combustível: ";
                        cin>>listagem[ajuda].combustivel;
                        cout<<"Câmbio: ";
                        cin>>listagem[ajuda].cambio;
                        cout<<"Direção: ";
                        cin>>listagem[ajuda].direcao;
                        cout<<"Cor: ";
                        cin>>listagem[ajuda].cor;
                        cout<<"Quantidade de portas: ";
                        cin>>listagem[ajuda].portas;
                        cout<<"Placa: ";
                        cin>>listagem[ajuda].placa;
                        cout<<"Valor: ";
                        cin>>listagem[ajuda].valor;
                        listagem[ajuda].valido = true;
                        qtde++;
                break;
            case 2:
                cout<<"Placa que deseja buscar: ";
                cin>>busca;
                for(int i = 0; i <= qtde; i++){
                    if (listagem[i].placa == busca && listagem[i].valido == true){
                        cout<<"Veículo:"<<endl;
                        cout<<listagem[i].modelo<<" ";
                        cout<<listagem[i].marca<<" ";
                        cout<<listagem[i].tipo<<" ";
                        cout<<listagem[i].ano<<" ";
                        cout<<listagem[i].km<<" ";
                        cout<<listagem[i].pot_mot<<" ";
                        cout<<listagem[i].combustivel<<" ";
                        cout<<listagem[i].cambio<<" ";
                        cout<<listagem[i].direcao<<" ";
                        cout<<listagem[i].cor<<" ";
                        cout<<listagem[i].portas<<" ";
                        cout<<listagem[i].placa<<" ";
                        cout<<"R$"<<listagem[i].valor<<endl;
                        cout<<"Deseja excluir o veículo da base de dados?\n(0-Não/1-Sim): ";
                        cin>>exclui;
                        if (exclui == 1){
                            listagem[i].valido = false;
                        }
                    }
                }
                break;
            case 3:
                cout<<"Tipo de veículo que deseja buscar: ";
                cin>>busca;
                cout<<endl;
                for(int i = 0; i <= qtde; i++){
                    if (listagem[i].tipo == busca && listagem[i].valido == true){

                        cout<<listagem[i].modelo<<" ";
                        cout<<listagem[i].marca<<" ";
                        cout<<listagem[i].tipo<<" ";
                        cout<<listagem[i].ano<<" ";
                        cout<<listagem[i].km<<" ";
                        cout<<listagem[i].pot_mot<<" ";
                        cout<<listagem[i].combustivel<<" ";
                        cout<<listagem[i].cambio<<" ";
                        cout<<listagem[i].direcao<<" ";
                        cout<<listagem[i].cor<<" ";
                        cout<<listagem[i].portas<<" ";
                        cout<<listagem[i].placa<<" ";
                        cout<<listagem[i].valor<<endl;
                    }
                }
                break;
            case 4:
                cout<<"Câmbio de veículo que deseja buscar: ";
                cin>>busca;
                cout<<endl;
                for(int i = 0; i <= qtde; i++){
                    if (listagem[i].cambio == busca && listagem[i].valido == true){

                        cout<<listagem[i].modelo<<" ";
                        cout<<listagem[i].marca<<" ";
                        cout<<listagem[i].tipo<<" ";
                        cout<<listagem[i].ano<<" ";
                        cout<<listagem[i].km<<" ";
                        cout<<listagem[i].pot_mot<<" ";
                        cout<<listagem[i].combustivel<<" ";
                        cout<<listagem[i].cambio<<" ";
                        cout<<listagem[i].direcao<<" ";
                        cout<<listagem[i].cor<<" ";
                        cout<<listagem[i].portas<<" ";
                        cout<<listagem[i].placa<<" ";
                        cout<<listagem[i].valor<<endl;
                    }
                }
                break;
            case 5:
                cout<<"Valor máximo do veículo: ";
                cin>>valueMax;
                cout<<"Valor mínimo do veículo: ";
                cin>>valueMin;
                cout<<endl;
                for(int i = 0; i <= qtde; i++){
                    if ((listagem[i].valor <= valueMax && listagem[i].valor >= valueMin) && listagem[i].valido == true){
                        
                        cout<<listagem[i].modelo<<" ";
                        cout<<listagem[i].marca<<" ";
                        cout<<listagem[i].tipo<<" ";
                        cout<<listagem[i].ano<<" ";
                        cout<<listagem[i].km<<" ";
                        cout<<listagem[i].pot_mot<<" ";
                        cout<<listagem[i].combustivel<<" ";
                        cout<<listagem[i].cambio<<" ";
                        cout<<listagem[i].direcao<<" ";
                        cout<<listagem[i].cor<<" ";
                        cout<<listagem[i].portas<<" ";
                        cout<<listagem[i].placa<<" ";
                        cout<<listagem[i].valor<<endl;
                    }
                }
                break;
            case 0:
                break;
            default:
                cout<<"Opção inválida.";
        }
            
    } while(opc != 0);
    
    for (int j = 0; j < qtde; j++){
        
        if(listagem[j].valido == true){
            if(listagem[j].tipo == "Hatch" || listagem[j].tipo == "hatch" || listagem[j].tipo == "HATCH"){
                type1++;
            }
            if(listagem[j].tipo == "SUV" || listagem[j].tipo =="suv" || listagem[j].tipo == "Suv" ){
                type2++;
            }
            if(listagem[j].tipo == "Passeio" || listagem[j].tipo == "passeio"){
                type3++;
            }
            if(listagem[j].tipo == "Pick-up" || listagem[j].tipo == "Pickup" || listagem[j].tipo == "Picape" || listagem[j].tipo == "Pick-Up" ){
                type4++;
            }
            if(listagem[j].tipo == "Sedã" || listagem[j].tipo == "Sedan" || listagem[j].tipo == "sedan" || listagem[j].tipo == "sedã"){
                type5++;
            }
            if(listagem[j].tipo == "Van" || listagem[j].tipo == "VAN" || listagem[j].tipo == "van"){
                type6++;
            }
            if(listagem[j].combustivel == "Gasolina"){
                gas++;
            }
            if(listagem[j].combustivel == "Diesel"){
                diesel++;
            }
            if(listagem[j].combustivel == "Flex"){
                flex++;
            }
            if(listagem[j].pot_mot == "1.0" && relat_bat > listagem[j].valor){
                relat_bat = listagem[j].valor;
                ajuda = j;
            }
            if(listagem[j].direcao == "Hidráulica" && listagem[j].cambio == "Automático" && relat_caro < listagem[j].valor){
                relat_caro = listagem[j].valor;
                ajuda2 = j;
            }
            if(listagem[j].ano <= 2019){
                carro_ano++;
                medkm = medkm + listagem[j].km;
            }
            qtdeExclui++;
        }
    }
    
    ofstream arquivo2("BD_veiculos.txt");
    if(!arquivo2.is_open()){
        cout<<"Erro: arquivo inexistente."<<endl;
        return 1;
    }
    
    for (int i = 0 ;i<qtde; i++){
        if (listagem[i].valido == true){
            arquivo2<<listagem[i].modelo<<"\t";
            arquivo2<<listagem[i].marca<<"\t";
            arquivo2<<listagem[i].tipo<<"\t";
            arquivo2<<listagem[i].ano<<"\t";
            arquivo2<<listagem[i].km<<"\t";
            arquivo2<<listagem[i].pot_mot<<"\t";
            arquivo2<<listagem[i].combustivel<<"\t";
            arquivo2<<listagem[i].cambio<<"\t";
            arquivo2<<listagem[i].direcao<<"\t";
            arquivo2<<listagem[i].cor<<"\t";
            arquivo2<<listagem[i].portas<<"\t";
            arquivo2<<listagem[i].placa<<"\t";
            arquivo2<<listagem[i].valor<<"\t\n";
        }   
    }
    arquivo2<<"fim";
    arquivo2.close();

    qtde = qtdeExclui;
    type1 = ((type1/qtde)*100);
    type2 = ((type2/qtde)*100);
    type3 = ((type3/qtde)*100);
    type4 = ((type4/qtde)*100);
    type5 = ((type5/qtde)*100);
    type6 = ((type6/qtde)*100);
    
    gas = ((gas/qtde)*100);
    diesel = ((diesel/qtde)*100);
    flex = ((flex/qtde)*100);
    
    medkm = medkm / carro_ano;
    pot = pow((1 + tax), qtdePrest);
    v_prest = listagem[ajuda].valor * ((pot * tax) / (pot-1));
    v_seg = listagem[ajuda2].valor * tax_seg;
    
    cout<<"\t\nRELATÓRIOS:\n";
    cout<<"Porcentagens de veículos nas categorias de tipo:"<<endl;
    cout<<"Hatch: "<<type1<<"%"<<endl;
    cout<<"SUV: "<<type2<<"%"<<endl;
    cout<<"Passeio: "<<type3<<"%"<<endl;
    cout<<"Pick-up: "<<type4<<"%"<<endl;
    cout<<"Sedan: "<<type5<<"%"<<endl;
    cout<<"Van: "<<type6<<"%"<<endl<<endl;
    cout<<"Porcentagens de veículos pelo combustível:"<<endl;
    cout<<"Gasolina: "<<gas<<"%"<<endl;
    cout<<"Diesel: "<<diesel<<"%"<<endl;
    cout<<"Flex: "<<flex<<"%"<<endl<<endl;
    cout<<"A placa e valor do veículo mais barato entre os veículos com potência do motor 1.0 são: "<<listagem[ajuda].placa<<" R$"<<listagem[ajuda].valor<<endl;
    cout<<"O valor da prestação do financiamento em 60 meses com taxa de juros de "<<tax*100<<"% deste carro é de: R$"<<v_prest<<endl<<endl;
    cout<<"A placa e valor do veículo mais caro com direção hidráulica e câmbio automático são: "<<listagem[ajuda2].placa<<" R$"<<listagem[ajuda2].valor<<endl;
    cout<<"O valor do seguro estimado é de R$"<<v_seg<<" por ano, com uma taxa de "<<tax_seg*100<<"% sobre o valor do carro"<<endl<<endl;
    cout<<"A quantidade e média de quilometragem dos veículos com 5 anos ou mais são: "<<carro_ano<<" carros e em média "<<medkm<<" Km"<<endl;

    return 0;
}

