#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

void recursivo(int n){
	if(n==0){
		cout<<n;
	}
	else{
		recursivo(n-1);
		cout<<n;
		
	}
}
main(){
	int n; 
	
	cout<<"Informe o numero: ";
	cin>>n;
    recursivo(n);
}

