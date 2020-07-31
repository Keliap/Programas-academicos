#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
using namespace std;

int ConverteBinario(int n){
if (n > 0)
return n%2 ConverteBinario(n-1);
else return 1;
}
main(){
int n, fat;
printf("\n\nDigite um valor para n: ");
scanf("%d", &n);
fat = fatorial(n);
printf("\nO fatorial de %d e' %d", n, fat);
}
