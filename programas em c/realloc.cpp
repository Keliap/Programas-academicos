#include <iostream>
#include <stdlib.h> //malloc, calloc, realloc
using namespace std;
main(){
int i;
int *p = (int *) malloc(5*sizeof(int));
    for(i = 0; i < 5; i++){
	printf("%d\n", p[i]);
}
p = (int *) realloc(p, 3 * sizeof(int));
    for(i = 0; i < 3; i++){
	printf("%d\n", p[i]);
}
p = (int *) realloc(p, 10 * sizeof(int));
    for(i = 0; i < 10; i++){
	printf("%d\n", p[i]);
}
}

