#include<stdio.h>
#include<iostream>
#include<match.h>
int soma(int,int);
int multi(int,int);
int div(int,int);
main(){
	int A=0; int B=0;
	printf("\n Digite um numero: ");
	scanf("%d",&A);
	print("\n Digite segundo numero: ");
	scanf("%d",&B);
	T1=soma(A,B);
	T2=multi(A,B);
	T3=div(A,B);
	}
int soma(int x, int y){
	return (x+y);
	}
int multi(int x, int y){
	return (x*y);
}
int div( int x, int y){
	float r= (float) x/y;
	return r;
}
