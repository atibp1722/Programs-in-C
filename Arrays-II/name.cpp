#include<stdio.h>
#include<string.h>
#define MAX 100

int main(){
	char name[MAX];
	printf("Enter any name:\n");
	gets(name);
	
	//Printing the user name
	//for(int i=0; i<strlen(name); i++)
	//{
	//	printf("%c",name[i]);
	//}
	
	//Upper and lower case conversion manually
	for(int i=0; i<strlen(name); i++)
	{
		if(name[i]>='a' && name[i]<='z')
		{
			printf("%c",name[i]-32);
		}else
		{
			printf("%c", name[i]+32);
		}
	}
	
	//length of the array
	int i=0;
	while(name[i] != '\0')
	{
		i++;
	}
	printf("\nThe length is %d ",i);
	return 0;
}
