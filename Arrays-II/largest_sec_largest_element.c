#include<stdio.h>
#define MAX 100

int main(){
	int array[MAX];
	int i, max1, max2;
	int size;
	printf("Entere the size of the array\n");
	scanf("%d",&size);
	for(i=0; i<size; i++)
	{
		printf("Enter the elements\n");
		scanf("%d",&array[i]);
	}
	if(array[0] > array[1])
	{
		max1=array[0];
		max2=array[1];
	}else
	{
		max1=array[1];
		max2=array[0];
	}
	for(i=2; i<size; i++)
	{
		if( array[i]>max1 )
		{
			max2=max1;
			max1=array[i];
		}
		else if(array[i]>max2 && array[i]<max1)
		{
			max2=array[i];
		}
	}
	printf("Largest number is %d", max1);
	printf("\n2nd largest number is %d", max2);
	return 0;
}
