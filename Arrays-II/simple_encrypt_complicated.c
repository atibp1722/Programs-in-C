#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<required.h>

int main(int argc, string argv[]){
	int i,j;
	if(argc !=2 )
	{
		printf("Enter key");
		return 1;
	}
	
	//Second argument can only have digit check
	for(i=0; i<strlen(argv[1]); i++)
	{
		if(!isdigit(argv[1][i]))
		{
			printf("Enter key");
			return 1;
		}
	}
		int key=atoi(argv[1]);
		char texts=get_string("Enter some text: ");
		printf("Cipher text: ");
		
		//Iterating each character in the text array
		for(j=0; j<strlen(texts); j++)
		{
			//Maintain the case sensetivity of each capital case character
			if(isupper(texts[j]))
			{
				printf("%c",(texts[j] -65 + key) %26 + 65);
			}
			else if(islower(texts[j]))
			{
				//Maintain the case sensetivity of each lower case character
				printf( "%c",(texts[j] -97 + key) %26 + 97);
			}
			else
			{
				printf("%c",texts[j]);
			}
		}
		printf("\n");
	}

