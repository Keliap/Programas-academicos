#include<stdio.h>
#include <iostream>
using namespace std;
#define TAM_MAX 6
void ImprimeVet (int Tam, int Vet[TAM_MAX]){
	int i;
	for (i=0; i< Tam; i++){
		printf("\n %d", Vet[i]);
		
	}
}
void ImprimeVetponteiro (int Tam, int *Vet){
	int i;
	for (i=0; i< Tam; i++){
		printf("\n %d", Vet[i]);
	}
}
int main(){
	int Notas[TAM_MAX]= {4,5,6,1,2,3};
	ImprimeVet(TAM_MAX, Notas);
	ImprimeVetponteiro(TAM_MAX, Notas);
}
