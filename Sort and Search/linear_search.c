#include<stdio.h>
#include<string.h>

int main(){
	int i;
	int nums[]={1,2,3,4,5,6,7};
	for(i=0; i<7; i++)
	{
		if(nums[i]==5)
		{
			printf("Element found at index %d",nums[i]-1);
			break;
		}
	}
	return 0;
}
