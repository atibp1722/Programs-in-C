#include<stdio.h>
#define MAX 50

int main(){
	int score[MAX];
	int size;
	int i;
	printf("How many elements would you like to add?\n");
	scanf("%d",&size);
	for(i=0; i<size; i++)
	{
		printf("Enter the elements:\n");
		scanf("%d",&score[i]);
	}
	for(i=0; i<size; i++)
	{
		printf("%d",score[i]);
	}
	printf("\n%d is the length", size);
	return 0;
}
