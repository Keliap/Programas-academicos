#include<stdio.h>
#include<conio.h>
#include<math.h>
#define tam_max 100
int vet[tam_max];


int verificar(int vet[tam_max]){
	int k;
	for (k=0; k<tam_max; k++){
			vet[k] = NULL;
	}
}
int fibonacci(int num){
	int vet[tam_max];
	
	if(vet[num]==NULL){
		
		if(num==1 || num==2){
			 vet[num]=num;
		}
		
   	else{
   			vet[num] = fibonacci(num-1) + fibonacci(num-2);
	   }
    
		}
       	return vet[num]; 
	}

	

main(){
	
	int n;
	printf("\nDigite um numero: \n");
	scanf("%d, &n");
	int verificar(int vet[tam_max]);
	printf("\n O resultado é: ", fibonacci (n));
	}

