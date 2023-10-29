#include<stdio.h>
#include<string.h>

int main(){
	int i,j,min;
	char names[15][50]=
	{
		"damian",
		"cartman",
		"butters",
		"manbearpig",
		"kenny",
		"stan",
		"garrison",
		"gerarld",
		"kyle",
		"tweak",
		"authoritah"
	};
	int length=11;
	char temp[100];
	
	for(i=0; i<length-1; i++)
	{
		min=i;
		for(j=i+1; j<length; j++)
		{
			if(strcmp(names[j], names[min])> 0)
			{
				min=j;
			}
		}
		if(min!=i)
		{
			strcpy(temp,names[i]);
			strcpy(names[i], names[min]);
			strcpy(names[min],temp);
		}
	}
	for(i=0; i<length; i++)
	{
		printf("%s\n", names[i]);
	}
		
	return 0;
}
