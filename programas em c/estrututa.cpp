#include<string.h>
#include<iostream>
#include<stdio.h>
struct est1 {
int i;
float f;
};
main(){
struct est1 primeira, segunda;
primeira.i = 10;
primeira.f = 3.1415;
segunda = primeira;
printf(" Os valores armazenados na segunda struct sao : %d e %f",segunda.i,segunda.f);
} 
