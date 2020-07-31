#include <iostream>
#include <stdlib.h> //vetor

void ler(int *v, int n){
	int num;
	for (int i=1; i<n; i++){
		printf("Digite um numero: ");
		scanf("%d",v[i]);	
	}
}
main(){
	int *num, n, num1;
	printf ("Qual o tamanho do vetor: ");
	scanf("%d",&num1);
	num=(int *)malloc(num1*sizeof(int));
	ler(num,num1);
	
	
}
free(num);
for(i = 0; i < 5n; i++){
printf("%d\n", num[i]);


