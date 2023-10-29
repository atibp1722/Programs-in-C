#include<stdio.h>
#include<stdlib.h>

int main(void){
	int i;
	//Dynamically create array of size 3
	int *list = malloc(3*sizeof(int));
	if(list==NULL)
	{
		return 0;	
	}
	//Populate the array
	list[0]=0;
	list[1]=1;
	list[2]=2;
	
	//Create new array with dynamically assigned size of 4
	//int *temp=malloc(4*sizeof(int));
	int *temp=realloc(list, 4*sizeof(int));
	if(temp==NULL)
	{
		return 0;
		free(list);
	}
//	//Copy old array into new array
//	for(i=0; i<3; i++)
//	{
//		temp[i]=list[i];
//	}
	temp[3]=3;
	list=temp;
	
	for(i=0; i<4; i++)
	{
		printf("%d ",list[i]);
	}
	free(list);
}
