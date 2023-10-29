#include<stdio.h>

int main(){
	int i,j,temp;
	int array[]={0,2,1,4,3};
	int length=5;
	for(i=0; i<length; i++)
	{
		for(j=0; j<(length-1); j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	for(i=0; i<length; i++)
	{
		printf("%d ",array[i]);
	}
	return 0;
}
