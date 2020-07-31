#include <stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
struct data_fab{
	int dia=0,mes=0,ano=0;
};
struct Carro{
	char marca[15];
	data_fab data;
	char cor[10];
	float precoR=0;

};
void imprime( Carro C);
main( ){
struct Carro veiculo;
				cout<<"Digite a marca do carro: ";
				cin>>veiculo.marca;
				cout<<"Imforme o dia de fabricacao do carro: ";
				cin>>veiculo.data.dia;
				cout<<"Imforme o mes de fabricacao do carro: ";
				cin>>veiculo.data.mes;
				cout<<"Imforme o ano de fabricacao do carro: ";
				cin>>veiculo.data.ano;
				cout<<"Imforme a cor do carro: ";
				cin>>veiculo.cor;
				cout<<"Imforme o valor real do carro: ";
				cin>>veiculo.precoR;
    imprime(veiculo);
}
void imprime ( Carro C){
				cout<<"\n A marca do veiculo e: "<<C.marca;
				cout<<"\n Data de fabricacao do veiculo e: "<<C.data.dia<<"/"<<C.data.mes<<"/"<<C.data.ano;
				cout<<"\n Cor: "<<C.cor;
				cout<<"\n O preco real:R$"<<C.precoR;
