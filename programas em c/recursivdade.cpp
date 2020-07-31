#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
using namespace std;
int S(int N){
	if(N==1){
		return 1;
	}
	else{
		return N+S(N-1);
	}
	
}
main(){
	int n, total;
	printf("Informe o valor de N: ");
	scanf("%d",&n);
	total=S(n);
	printf("\n\nTotal do somatorio e: %d",total);
}
