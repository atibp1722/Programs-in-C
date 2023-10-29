#include<stdio.h>
#include<math.h>

int main(){
	float rupe;
	do
	{
		printf("Enter the amount\n");
		scanf("%f",&rupe);
	}while (rupe<=0) ;
	
	//The denominations of coins available are 1,2,5,10,25,50 paisa respectively
	int paisa = round(rupe*100);
	int coins = 0;
	while(paisa>=50)
	{
		paisa=paisa-50;
		coins++;
	}
	while(paisa>=25)
	{
		paisa=paisa-25;
		coins++;
	}
	while(paisa>=10)
	{
		paisa=paisa-10;
		coins++;
	}
	while(paisa>=5)
	{
		paisa=paisa-5;
		coins++;
	}
	while(paisa>=2)
	{
		paisa=paisa-2;
		coins++;
	}
	while(paisa>=1)
	{
		paisa=paisa-1;
		coins++;
	}
	printf("The amount of coins needed is %i ", coins);
	return 0;
}
