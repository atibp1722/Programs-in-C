#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int number;
	struct node *next;
}
node;

int main()
{
	node *list=NULL;
	node *n=malloc(sizeof(node));
	if(n==NULL)
	{
		return 1;
	}
	n->number=1;
	n->next=NULL;
	
	//Points to new node
	list=n;
	
	//Add number to the list
	n=malloc(sizeof(node));
	if(n==NULL)
	{
		free(list);
		return 1;
	}
	n->number=2;
	n->next=NULL;
	list->next=n;
	
	n=malloc(sizeof(node));
	if(n==NULL)
	{
		free(list->next);
		free(list);
		return 1;
	}
	n->number=3;
	n->next=NULL;
	list->next->next=n;
	
	//Start at beginning of the list and move until end of list is reached
	for(node *tmp=list; tmp!=NULL; tmp=tmp->next)
	{
		printf("%i ",tmp->number);
	}

	//Freeing the entire list
	while(list!=NULL)
	{
		node *tmp=list->next;
		free(list);
		list=tmp;
	}
	return 0;
}
