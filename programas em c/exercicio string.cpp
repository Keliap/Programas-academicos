#include<string.h>
#include<iostream>
#include<stdio.h>
using namespace std;

void imprimenome(char N[30]){
	int i, pos, tam = strlen(N);
	i = tam;
	while (N[i-1]!=' '){
		i--;
	}
	for(int j = i; j < tam; j++){
		cout << N[j];
	}
	cout <<",";
	i = 0;
	while (N[i]!=' '){
		cout << N[i];
		i++;
	}
}

main(){
	char nome [10] [100];
	int recebe;
	for(int i=0; i<10; i++){
		printf("\n Digite o nome: ",i++);
		gets(nome [i]);
		imprimenome(nome[i]);
	}
}
