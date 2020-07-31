#include<string.h>
#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
char nome[30];
int tamanho;
printf("Informe a string: ");
gets(nome);
tamanho = strlen(nome);
printf("O tamanho da string e: %d",tamanho);
}


