#include<stdio.h>

int price();
int discount();

int main(){
	int fp = price()-discount();
	printf("The final price is %d\n", fp);
	return 0;
}

int price()
{
	int p;
	printf("Enter price\n");
	scanf("%d",&p);
	return p;
}

int discount()
{
	int d;
	printf("Enter discount\n");
	scanf("%d",&d);
	return d;
}

