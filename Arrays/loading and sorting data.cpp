#include<stdio.h>
#include<conio.h>

int main(){
	int i, j;
	int a [3] [4];
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			a [i][j] = i+j;
		}
		for(i=0; i<3; i++)
		{
			for(j=0; j<4; j++)
			{
				printf("a[%d][%d] = i, j, a[i][j]");
				printf("\n");
			}
		}
	}
	return 0;
}
