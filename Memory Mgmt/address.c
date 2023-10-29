#include<stdio.h>

int main(void)
{
//	int a=10;
//	int *ptr=&a;
//	printf("%p",ptr);
//	printf("\n%i",*ptr);
//	string s="Hi!";
//	char *c=&s[0];
//	printf("\n%p",c);
//	printf("\n%p",s);
//	printf("\n%p",&s[0]);
//	printf("\n%p",&s[1]);
//	printf("\n%p",&s[2]);
//	printf("\n%p",&s[3]);
//	char *s="hi!";
//	printf("%c\n",*s);
//	printf("%c\n",*(s+1));
//	printf("%c\n",*(s+2));
//	printf("%c",*(s+3));
	int num[]={1,2,3,4,5};
	printf("%i\n",num[0]);
	printf("%i\n",num[1]);
	printf("%i\n",num[2]);
	printf("%i\n",*num);
	printf("%i\n",*(num+1));
	printf("%i",*(num+2));
}
