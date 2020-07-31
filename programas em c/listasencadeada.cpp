#include<iostream>
#include<stdlib.h>
using namespace std;

struct TipoCelula{
	int chave;
	struct TipoCelula*Prox;
};
struct TipoLista{
	struct TipoCelula *Primeiro, *Ultimo;
};
//torna a lista vazia
void FLVazia(struct TipoLista *Lista){
	Lista->Primeiro=(struct TipoCelula*) malloc(sizeof(TipoCelula));
	Lista->Ultimo=Lista->Primeiro;
	Lista->Primeiro->Prox=NULL;
}
//verifica se a lista esta vazia
int Vazia(struct TipoLista Lista){
	return (Lista.Primeiro==Lista.Ultimo);	
}

//insere elemento no final da lista
void Insere(int x, struct TipoLista*Lista){
	Lista-> Ultimo->Prox =(struct TipoCelula*)malloc(sizeof(struct TipoCelula));
	Lista->Ultimo=Lista->Ultimo->Prox;
	Lista->Ultimo->chave=x;
	Lista->Ultimo->Prox=NULL;
}

//Retira os elementos da lista por chave
void RetiraPorChave(int x, struct TipoLista*Lista){
	struct TipoCelula*Aux,*exc;
	if(Vazia(*Lista)){
		printf("Lista esta vazia. ");
		return;
	}
//Percorro a lista a partir do primeiro
	Aux=Lista->Primeiro;
	while(Aux!=NULL){
		/*verifica se o proximo elemento é igual item pesquisado*/
		if(Aux->Prox==NULL){
			printf("Elemento não encontrado.");
			return;
		}
		//Se encontrar o elemento a ser excluido
		else if(Aux->Prox->chave==x){
			exc=Aux->Prox;
			Aux->Prox=Aux->Prox->Prox;
			if(Aux->Prox==NULL){
				Lista->Ultimo=Aux;
				free(exc);
			}
			Aux=Aux->Prox;
	
		}
	}
}
void Imprime(struct TipoLista Lista){
	printf("\n\n----LISTA----\n\n");
	struct TipoCelula*Aux;
	Aux=Lista.Primeiro->Prox;
	while (Aux!=NULL){
		printf("\nChave: %d",Aux->chave);
		Aux=Aux->Prox;
	}
}


void Retira(struct TipoCelula *p, struct TipoLista *lista){
	struct TipoCelula*aux;
	
	if (Vazia(*lista) || p==NULL || p-> Prox == NULL){
		printf("Erro: Lista Vazia ou posição não existe \n");
		return;
	}
	aux=p-> Prox;
	p-> Prox = aux-> Prox;
	if(p-> Prox==NULL)
		lista->Ultimo=p;
		free(aux);
}

main(){
	struct TipoLista L1;
	FLVazia(&L1);
	Insere(10, &L1);
	Insere(9, &L1);
	Insere(11, &L1);	
	Insere(13, &L1);
	Imprime(L1);
	RetiraPorChave(9, &L1);
	Imprime(L1);
	Retira(L1.Primeiro,&L1);
	Imprime(L1);
}
