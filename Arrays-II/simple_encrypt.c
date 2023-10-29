#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<required.h>
#define MAX 25

int main(){
	int i,key;
	do
	{
		printf("Enter key\n");
		scanf("%d",&key);
	}while (key<0);
	
	char texts[MAX]={'h','a','r','i'};
	for(i=0; i<strlen(texts); i++)
	{
		if(isupper(texts[i]))
		{
			printf("%c",(texts[i] -65 + key) %26 + 65);
		}
		else if(islower(texts[i]))
		{
			//Maintain the case sensetivity of each lower case character
			printf( "%c",(texts[i] -97 + key) %26 + 97);
		}
		else
		{
			printf("%c",texts[i]);
		}
	}
	return 0;
}
