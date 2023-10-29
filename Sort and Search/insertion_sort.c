#include<stdio.h>
#define MAX 10

void insertion_sort(int a[], int length);

int main(){
	int i;
	int a[MAX]={8,7,6,4,1,2,0,3};
	insertion_sort(a,8);
	for(i=0; i<8; i++)
	{
		printf("a[%d]= %d\n",i,a[i]);
	}
	return 0;
}
void insertion_sort(int a[], int length)
{
	int i;
	for(i=1; i<length; i++)
	{
		int key=a[i];
		int j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
}
