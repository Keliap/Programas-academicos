#include<stdio.h>
#include<iostream>
#include<math.h>
void incrementa (int *a, int *b){
	(*a)++;
	(*b)++;
}

main(){
	int a=10, b=10;
	printf("Valor de a:%d \Endereço de a: %d\n", a, &a);
	printf("Valor de b:%d \Endereço de a: %d\n", b, &b);
	incrementa (&a,&b);
	printf("Valor de a:%d \Endereço de a: %d\n", a, &a);
	printf("Valor de b:%d \Endereço de a: %d\n", b, &b);
}

