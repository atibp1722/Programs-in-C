#include<stdio.h>
#define MAX 10

int main(){
	int i, start, end, mid, size, element;
	int nums[MAX];
	printf("Enter size of sorted array: ");
	scanf("%d",&size);
	
	for(i=0; i<size; i++)
	{
		printf("\nEnter element in sorted order: ");
		scanf("%d",&nums[i]);
	}
	printf("\nEnter the element to search: ");
	scanf("%d",&element);
	start=0;
	end=size-1;
	
	while(start<=end)
	{
		mid=(start+end)/2;
		if(element<nums[mid])
		{
			end=mid-1;
		}else if(element==nums[mid])
		{
			printf("\nElement found at index %d", mid);
			break;
		}else if(element>nums[mid])
		{
			start=mid+1;
		}
	}
	if(start>end)
	{
		printf("No such element in the array.");
	}
	return 0;
}
