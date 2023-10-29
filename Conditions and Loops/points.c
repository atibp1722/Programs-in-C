#include<stdio.h>

int main(){
	int pnt;
	printf("How many points did you score?\n");
	scanf("%d",&pnt);
	if(pnt>40 && pnt<=59)
	{
		printf("You have passed");
	}else if(pnt>60 && pnt<=79)
	{
		printf("You scored nicely");
	}else if(pnt>80 && pnt<=100){
		printf("You scored amazing");
	}else{
		printf("Your score is invalid, so you have failed.");
	}
	return 0;
}
