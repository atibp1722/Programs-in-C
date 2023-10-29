#include<stdio.h>
#include<conio.h>

int main(){
	
	int i; 
	float num[10];
	
	printf("Enter any 10 numbers: ");
	for(i=0; i<10; i++){
		scanf("%f", &num[i]);
	}
	printf("\n The numbers are: ");
	for(i=0; i<10; i++){
		printf("\n num[%d] = %f", i, num[i]);
	}
	return 0;
}
