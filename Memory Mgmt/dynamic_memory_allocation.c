#include<stdio.h>
#include<required.h>
#include<string.h>
#include<stdlib.h>

int main(void){
	char *s=get_string("Str: ");
	char *t=malloc(strlen(s)+1);
	strcpy(t,s);
	t[0]=toupper(t[0]);
	printf("%s",&s);
	printf("\n%s",&t);
	free(t);
}
