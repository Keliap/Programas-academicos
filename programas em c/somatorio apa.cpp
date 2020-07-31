#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int somat(int num){
	if(num==1){
		return 1;
	}
	else{
		return num+somat(num-1);
	}
	
}
main(){
	int num, tot;
	cout<<"Digite um numero: ";
	cin>>num;
	tot=somat(num);
	cout<<"O resultado do somatorio e: "<<tot;
}

