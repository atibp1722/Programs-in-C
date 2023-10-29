#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

void main(){
	int n,i, temp;
	struct Node* newNode;
	struct Node* start;
	start=(struct Node*)malloc(sizeof(struct Node));
	printf("Enter size fo the node\n");
	scanf("%d",&n);
	printf("Enter values for list\n");
	scanf("%d",&temp);
	struct Node* temp1;
	temp1=start;
	temp1->data=temp;
	for(i=2;i<=n;i++){
		struct Node* newNode;
		newNode=(struct Node*)malloc(sizeof(struct Node));
		scanf("%d",&temp);
		newNode->data=temp;
		temp1->next=newNode;
		temp1=temp1->next;
	}
	//Insert node at beginning
	printf("Enter value for node at beginning\n");
	scanf("%d",&temp);
	newNode= (struct Node*)malloc(sizeof(struct Node));
	newNode->data=temp;
	//new node points to the first element
	newNode->next=start;
	start=newNode;
	//temp1 now points to new first element
	temp1=start; 
	
	printf("The elements of list are\n");
	temp1=start;
	for(i=1;i<=n; i++){
		printf("%d->",temp1->data);
		temp1=temp1->next;
	}
	printf("%d->",temp1->data);
}
