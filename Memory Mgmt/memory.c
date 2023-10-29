#include<stdio.h>
#include<stdlib.h>

int main(void){
	int *mem = malloc(2*sizeof(int));
	mem[0]=1;
	mem[1]=10;
	free(mem);
}
