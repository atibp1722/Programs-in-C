#include<stdio.h>
#define MAX 100

int main(){
	int array[MAX];
	int size,i,j;
	int temp;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	for(i=0; i<size; i++)
	{
		printf("Enter the elements:\n");
		scanf("%d",&array[i]);
	}
	printf("\n--------Before Sorting--------\n");
	for(i=0; i<size; i++)
	{
		printf("%d ",array[i]);
	}
	for(i=0; i<size; i++)
	{
		for(j=0; j<size; j++)
		{
			if(array[j] > array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	printf("\n--------After Sorting--------\n");
	for(i=0; i<size; i++)
	{
		printf("%d ",array[i]);
	}
	return 0;
}
