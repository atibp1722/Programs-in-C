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
	
	/*//Insert node at beginning
	printf("Enter value for new node at beginning\n");
	scanf("%d",&temp);
	newNode= (struct Node*)malloc(sizeof(struct Node));
	newNode->data=temp;
	//new node points to the first element
	newNode->next=start;
	//new node is now start of the list
	start=newNode;
	//temp1 now points to new first element
	temp1=start;*/ 
	
	//insert at the end
	printf("Enter value of new node at end\n");
	scanf("%d",&temp);
	newNode->data=temp;
	//iterate until reach the last element
	temp1=start;
	while(temp1->next!=NULL){
		temp1=temp1->next;
	}
	temp1->next=newNode;
	temp1=start;
	
	printf("The elements of list are\n");
	//while(temp1->next!=NULL){
	for(i=1; i<=n; i++){
		printf("%d->",temp1->data);
		temp1=temp1->next;
	}
	//printf("%d->NULL",temp1->data);
	printf("%d->",temp1->data);
}
