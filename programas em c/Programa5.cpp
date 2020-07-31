#include<stdio.h>
#include <iostream>
#include<math.h>
using namespace std;

float raio(float r){
	float v=(4*3.14*pow(r,3))/3;
	return v;
}
main(){
	float lor, tot=0;
	printf("Digite um numero :");
	scanf("%f",&lor);
	tot=raio(lor);
	printf("O volume e: %f",tot);
}

