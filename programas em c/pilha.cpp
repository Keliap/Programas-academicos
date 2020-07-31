#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

struct TipoCelula{
	int chave;
	struct TipoCelula *Prox;
};
struct TipoPilha {
	struct TipoCelula *Fundo, *Topo;
};
//Torna pilha vazia
void FPVazia(TipoPilha *Pilha){
	Pilha->Topo = (TipoCelula *)malloc(sizeof(TipoCelula));
	Pilha->Fundo = Pilha->Topo;
	Pilha->Topo->prox = NULL;
	Pilha->Tamanho = 0;
}
//Verifica se a pilha está vazia
bool Vazia(TipoPilha Pilha){
	return (Pilha.Topo==Pilha.Fundo);
}
//Função empilha item no topo da pilha
void Empilha(int x, TipoPilha *Pilha){
	TipoCelula*Aux;
	Aux=(TipoCelula*)malloc(sizeof(TipoCelula));
	Pilha->Topo->chave=x;
	Aux->Prox=Pilha->Topo;
	Pilha->Topo=Aux;
	Pilha->Tamanho++;
}
//Função desempilha item do topo da pilha
void Desempilha(TipoPilha *Pilha, TipoCelula *Celula){
	if(Vazia(*Pilha)){
		cout<<"\n\nErro: Pilha vazia!";
		return;
	}
	TipoCelula*q;
	q=Pilha->Topo;
	Pilha->Topo=q->Prox;
}
