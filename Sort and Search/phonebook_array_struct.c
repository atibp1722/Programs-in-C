#include<stdio.h>
#include<required.h>

typedef struct
{
	string name;
	string contact;
}
person;

int main(void){
	int i;
	person info[2];
	
	info[0].name="Ram";
	info[1].name="Gita";
	info[0].contact="+977-9841098410";
	info[1].contact="+977-9851098510";
	
//	string names[]={"Ram", "Gita"};
//	string phone[]={"+977-9841098410", "+977-9851098510"};
//	
	for(i=0; i<2; i++)
	{
		if(strcmp(info[i].name,"Gita")==0)
		{
			printf("Found %s",info[i].contact);
			return 0;
		}
	}
	printf("Not found!");
	return 1;

}
