#include<stdio.h>
#define MAX 100

int main(){
	int array[MAX];
	int size, i;
	int temp;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	for(i=0; i<size; i++)
	{
		printf("Enter the elements\n");
		scanf("%d",&array[i]);
	}
	printf("-----Before Reverse-----\n");
	for(i=0; i<size; i++)
	{
		printf("%d ",array[i]);
	}
	for(i=0; i<size/2; i++)
	{
		temp=array[i];
		array[i]=array[size-i-1];
		array[size-i-1]=temp;
	}
	printf("\n-----After Reverse-----\n");
	for(i=0; i<size; i++)
	{
		printf("%d ",array[i]);
	}
	return 0;
}
