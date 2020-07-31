#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
using namespace std;

int F(int v[5],int n){
if (n == 0)
  return v[n];
else 
  return v[n]+F(v,n-1);
}
main(){
int x[5]={3,5,2,9,1};
cout<<F(x,4);
}
