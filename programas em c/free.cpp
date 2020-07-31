#include <iostream>
#include <stdlib.h> //malloc, calloc, realloc, free
using namespace std;
main(){
int *p, i;
p = (int *) malloc(50 * sizeof(int));
if(p == NULL){
printf("Erro. Memória Insuficiente\n");
exit(1);
}
for(i = 0; i < 50; i++){
p[i] = i + 1;
}
for(i = 0; i < 50; i++){
printf("%d\n", p[i]);
}
free(p);
}

