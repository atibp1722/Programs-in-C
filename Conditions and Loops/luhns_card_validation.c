#include<stdio.h>

int main(void){
	long long creditCardNo;
	do
	{
		printf("Enter a credit card number\n");
		scanf("%lld",&creditCardNo);
	}while(creditCardNo<=0);
	
	long long cardNo=creditCardNo;
	int sum=0; 
	int i;
	int counter=0;
	long long div=10;
	
	//Getting the odd placed digit
	//if no. is 1234 {0,1,2,3}
	//1234%10=4 [which is the last digit]
	//1234/100=12.34 [12 since it is int]
	//12%10=2 [which is the next digit]
	while(cardNo>0)
	{
		int lastDigit=cardNo%10;
		sum=sum+lastDigit;
		cardNo=cardNo/100;
	}
	
	//Getting the even placed digit
	//divide number by 10
	//multiply even placed digits by 2
	//if 2 digit number is result of multiplication like 11 add 1+1
	//number%10 gives the last digit
	//number/10 gives remaining digit since it is int it rounds off the number
	//add these 2 digits to the sum
	cardNo=creditCardNo/10;
	while(cardNo>0)
	{
		int lastDigit=cardNo%10;
		int timesTwo=lastDigit*2;
		sum=sum+(timesTwo%10)+(timesTwo/10);
		cardNo=cardNo/100;
	}
	
	//Getting the number od digits in the number
	//divide number by 10 and increase counter by 1 until 0 is gotten
	cardNo=creditCardNo;
	while(cardNo!=0)
	{
		cardNo=cardNo/10;
		counter++;
	}
	
	//Getting the 1st two digits of the number
	//set div to 10 
	//for first digit divide number by 1000
	//for first two digits divide number by 100
	for(i=0; i<counter-2; i++)
	{
		div *= 10;
	}
	int first=creditCardNo/div;
	int firstAndSecond=creditCardNo/(div/10);
	//printf("%d\n",first);
	//printf("%d",firstAndSecond);
	
	//Check for card validity
	//The sum must always be divisible by 10
	//If not card is invalid
	if(sum%10==0)
	{
		//printf("%d", sum);
		
		//Conditions for various types of cards
		//Check the first digit or first two digit and the length(counter) of the card number
		if( first==4 && (counter==13 || counter==16) ) 
		{
			printf("\nThe card is VISA\n");
		}else if( (firstAndSecond==51 || firstAndSecond==52 || firstAndSecond==53
		 || firstAndSecond==54|| firstAndSecond==55) && counter==16 )
		{
			printf("\nThe card is MASTERCARD\n");
		}else if( firstAndSecond==34 || firstAndSecond==37 && counter==15 )
		{
			printf("\nThe card is AMERICAN EXPRESS\n");
		}
		else if( (firstAndSecond==30 || firstAndSecond==38) && counter==14 )
		{
			printf("\nThe card is DINERS CLUB\n");
		}
	}else
	{
		printf("\nINVALID CARD\n");
	}
	return 0;
}
