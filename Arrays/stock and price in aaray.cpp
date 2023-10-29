#include<stdio.h>
#include<conio.h>

int main()
{
	int i, sum = 0, stock[5], price[5];
	for(i=0; i<5; i++)
	{
		printf("\n Enter stock value: ");
		scanf("%d", &stock[i]);
		
		printf("\n Enter the price of shoes: ");
		scanf("%d", &price[i]);
		
		sum = sum+(stock[i] * price[i]);
	}
	printf("%d", sum);
	return 0;
}
