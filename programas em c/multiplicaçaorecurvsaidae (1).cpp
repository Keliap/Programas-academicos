#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
using namespace std;

int multi(int n, int k){
if (n > 0)
return k*multi(n-1,k);
else return 1;
}
main(){
int k,n,multip;
printf("\n\nDigite um valor para k: ");
scanf("%d", &k);
printf("\n\nDigite um valor para n: ");
scanf("%d", &n);
multip=multi(n,k);
printf("\nO Resultado %d",multip);
}
