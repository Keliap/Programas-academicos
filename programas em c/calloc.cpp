#include <iostream>
#include <stdlib.h> //malloc, calloc
using namespace std;
main(){
int i;
int *p;
p = (int *) malloc(5 * sizeof(int));
int *p1;
p1 = (int *) calloc(5, sizeof(int));
printf("caloc \t\t malloc\n");
for(i = 0; i < 5; i++){
printf("p1[%d] = %d\t p[%d] = %d\n",i, p1[i], i, p[i]);
}
}
