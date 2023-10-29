#include<stdio.h>

int main(){
	int num,rem,total=0,temp;
	printf("Enter number to check\n");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rem=num%10;
		total=total+(rem*rem*rem);
		num=num/10;
	}
	if(temp==total)
	{
		printf("%d is Armstrong's Number ",temp);
	}else
	{
		printf("It isn't Armstrong's Number.");
	}
	return 0;
}
