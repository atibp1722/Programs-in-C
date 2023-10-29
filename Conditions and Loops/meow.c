#include<stdio.h>

void meow(int n)
{
	int i;
	for(i=0; i<n; i++)
	{
	printf("\nmeow!!");
	}
}

int main(){
	meow(2);
	return 0;
}
