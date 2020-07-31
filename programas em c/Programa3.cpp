#include<stdio.h>
#include<iostream>
#include<math.h>
void soma (int x, int y, int *p){
	*p= x+y;
}
main(){
	int x=0,y=0,z=0;
	printf("\n Digite um numero para x:");
	scanf("%d",&x);
	printf("\n Digite um numero para y:");
	scanf("%d",&y);
	soma(x,y,&z);
    printf("\n resultado %d+%d = %d",x,y,z);
    
}

