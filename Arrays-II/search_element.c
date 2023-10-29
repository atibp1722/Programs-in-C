#include<stdio.h>
#define MAX 100

int main(){
	int array[MAX];
	int i, size;
	int key;
	printf("Enter the size of array\n");
	scanf("%d", &size);
	for(i-0; i<size; i++)
	{
		printf("Enter the elements\n");
		scanf("%d",&array[i]);
	}
	printf("\nEnter element to search\n");
	scanf("%d",&key);
	for(i=0; i<size; i++)
	{
		if( array[i]==key )
		{
			printf("Element found at index %d", i);
			break;
		}
	}if(i==size)
	{
		printf("No such element found.");
	}
	return 0;
}
