#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<time.h>

using namespace std;
void imprimecarro(char marca[]);

typedef struct Data{
	int dia;
	int mes;
	int ano;
} Data;
 
typedef struct carro{
	char marca[15];
	char cor [10];
	float preco;
	Data fabricacao;
} Carro;

Carro c[10];

main(){
	char marca[15];
	
	for(int i = 0; i < 10; i++){
		printf("Insira a marca do %do. carro: ", i + 1);
		scanf("%s", &c[i].marca);
		printf("insira a cor do %do. carro: ",  i + 1);
		scanf("%s", &c[i].cor);
		printf("Insira o preco do %do. carro: ",  i + 1);
		scanf("%f", &c[i].preco);
		printf("Insira a data de fabricacao (DIA|MES|ANO) do %do. carro: ", i + 1);
		scanf("%d %d %d", &c[i].fabricacao.dia, &c[i].fabricacao.mes, &c[i].fabricacao.ano);
		printf("\nCarro inserido com sucesso!");
		printf("\nPressione uma tecla para continuar.");
		getch();
		system("cls");
	}
	
	printf("Informe o carro desejado para impressao: ");
	scanf("%s", marca);
	imprimecarro(marca);
	
	printf("Fim do Programa.");
	return 0;
}

void imprimecarro(char marca[]){
	int x;
	
	for(int i = 0; i < 10; i++){
		if (strcmp(marca,c[i].marca) == 0){
			x = i;
			break;
		}
	}
	
	printf("\n%s\n", c[x].marca);
	printf("%s\n", c[x].cor);
	printf("%.2f\n", c[x].preco);
	printf("%d/%d/%d\n", c[x].fabricacao.dia, c[x].fabricacao.mes, c[x].fabricacao.ano);
}
