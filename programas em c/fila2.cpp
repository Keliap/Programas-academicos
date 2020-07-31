#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

typedef struct TipoCelula{
	int Chave;
	struct TipoCelula *Prox;
};
typedef struct TipoFila{
	struct TipoCelula *Frente, *Tras;
};
//Torna a Fila Vazia
void FFVazia(struct TipoFila *Fila){
	Fila->Frente=(struct TipoCelula *)malloc(sizeof(struct TipoCelula));
	Fila->Tras=Fila->Frente;
	Fila->Frente->Prox=NULL;
}
//Retorna true se a Fila Vazia
int Vazia(struct TipoFila Fila){
	return (Fila.Frente==Fila.Tras);
}
//Enfileira um item no final
void Enfileira(int x,struct TipoFila *Fila){
	Fila->Tras->Prox=(struct TipoCelula *)malloc(sizeof(struct TipoCelula));
	Fila->Tras=Fila->Tras->Prox;
	Fila->Tras->Chave=x;
	Fila->Tras->Prox=NULL;
}
//Desemfileira um item no inicia da fila
void Desenfileira (struct TipoFila *Fila, struct TipoCelula *Celula){
	struct TipoCelula *q;
	if(Vazia(*Fila)){
		printf("Erro fila Vazia\n");
		return;
	}
	q=Fila->Frente;
	Fila->Frente=Fila->Frente->Prox;
	Celula->Chave=Fila->Frente->Chave;
	free(q);
}
//Imprime a fila
/*void ImprimeFila(TipoFila *Fila){
	TipoCelula Aux;
	TipoFila FilaAux;
	FFVazia(&FilaAux);
	while (!Vazia(*Fila)){
		Desenfileira(Fila,&Aux);
		printf("%d\n",Aux.Chave);
		Enfileira(Aux.Chave,&FilaAux);
	}
	while(!Vazia(FilaAux)){
		Desenfileira(&FilaAux,&Aux);
		Enfileira(Aux.Chave,Fila);
	}
}*/

void Imprime(TipoFila Fila){
	TipoCelula *Aux;
	Aux=Fila.Frente->Prox;
	while (Aux !=NULL){
		printf("%d\n", Aux->Chave);
		Aux=Aux->Prox;
	}
}
//Função para copiar os valores da pilha
void Copia(TipoFila *Fila, TipoFila *Fila2){
	TipoCelula auxP;
	TipoFila FilaAux;
	FFVazia(&FilaAux);
	while (!Vazia(*Fila)){
		Desenfileira(Fila,&auxP);
		Enfileira(auxP.Chave,&FilaAux);
		Imprime(FilaAux);
		printf("\n");
	}
	while(!Vazia(FilaAux)){
		Desenfileira(&FilaAux, &auxP);
		Enfileira(auxP.Chave, Fila);
	}
	
}
//Função para insere um numero ordenado em ordem descrescente
void Insere(int comp, TipoFila *Fila){
	
	bool flagAchou=0;
	TipoCelula auxP;
	TipoFila FilaAux;
    FFVazia(&FilaAux);
		
	if(Vazia(*Fila))
	{
		Enfileira(comp,Fila);
		flagAchou=1;
	}
	while (!Vazia(*Fila)){		
		Desenfileira(Fila,&auxP);
		
		if(auxP.Chave < comp){
		Enfileira(comp,&FilaAux);
		Enfileira(auxP.Chave,&FilaAux);	
		flagAchou=1;
		
		while(!Vazia(*Fila)){
		Desenfileira(Fila,&auxP);
		Enfileira(auxP.Chave, &FilaAux);
	}
}else {
			Enfileira(auxP.Chave, &FilaAux);
		}
}
		if(!flagAchou){
			Enfileira(comp,&FilaAux);
		}
		while(!Vazia(FilaAux)){
			Desenfileira(&FilaAux,&auxP);
			Enfileira(auxP.Chave, Fila);
		}
   }




main(){
	TipoFila F1, F2; 
	TipoCelula C1;
	int comp;
	
	FFVazia(&F1);
	FFVazia(&F2);
	//Enfileira(30, &F1);
	//Enfileira(10, &F1);
	//Enfileira(40, &F1);
	Imprime(F1);
	
	//Desenfileira(&F1, &C1);
	//printf("\n\n%d\n\n",C1.Chave);
	
	//Imprime(F1);

	
	Insere(1,&F1);
	Insere(155,&F1);
	Insere(23,&F1);
	Imprime(F1);
	
	
} 
