#include<stdio.h>
#include<required.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#define MAX 999

int main(void){
	int i;
	char text[MAX];
	printf("Enter a text:\n");
	gets(text);

	int countLetters=0;
	for(i=0; i<strlen(text); i++)
	{
		if( (text[i]>='a' && text[i]<='z') || (text[i]>='A' && text[i]<='Z')  )
		//it is the same as above only factory method is used
		//if( isalplha(text[i]) )
		{
			countLetters++;
		}
	}
	printf("Total letters: %d", countLetters);
	
	//Words need to begin with 1 as the first word always has no space
	int countWords=1;
	for(i=0; i<strlen(text); i++)
	{
		if(text[i]==' ')
		{
			countWords++;
		}
	}
	printf("\nTotal words: %d", countWords);
	
	int countSentence=0;
	for(i=0; i<strlen(text); i++)
	{
		if(text[i]=='.' || text[i]=='!' || text[i]=='?' || text[i]=='. ')
		{
			countSentence++;
		}
	}
	printf("\nTotal sentences: %d", countSentence);
		
	//Calculating the  index
	//formula is 0.0588*noOfLetters per 100 words - 0.296*noOfSentences per 100 words - 15.8
	float letter=(countLetters/countWords)*100;
	float sentence=(countSentence/countWords)*100;
	float index= (0.0588*letter) - (0.296*sentence) - 15.8;
	printf("\nThe index is: %.0f", round(index));
	
	//Condtions to check the reading grade
	if(index<1)
	{
		printf("\nLevel is BEFORE GRADE 1");
	}else if(index>1 && index<16)
	{
		printf("\nLevel is %.0f",round(index));
	}
	else
	{
		printf("\nLevel is %.0f+",round(index));
	}
}
