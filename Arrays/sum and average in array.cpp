#include<stdio.h>
#include<conio.h>

int main(){
	int i, sum=0, avg, marks[5];
	
	for(i=0; i<5; i++){
		printf("Enter the marks for the subjects: ", i+1);
		scanf("%d", &marks[i]);
	}
	for(i=0; i<5; i++){
		sum= sum + marks[i];
	}
	avg = sum / 5;
	printf("The average is: %d", avg);
	return 0;
}
