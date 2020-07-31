#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
using namespace std;
void imprimeRecursivo(int N){
	if(N==0)
		printf("%d",N);
	else{
		imprimeRecursivo(N-1);
		printf("%d",N);
	}	
}
main(){
	int n, total;
	printf("Informe o valor de N: ");
	scanf("%d",&n);
	imprimeRecursivo(n);
}
