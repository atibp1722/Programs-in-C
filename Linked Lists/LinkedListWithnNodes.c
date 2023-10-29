#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

void main(){
	int n, temp, i;
	struct Node* start;
	start=(struct Node*)malloc(sizeof(struct Node));
	//prompt to enter number of nodes
	printf("Enter the number of nodes\n");
	scanf("%d",&n);
	//prompt to enter value of nodes
	printf("Enter values for nodes\n");
	scanf("%d",&temp);
	//making temp1 the start node for the list
	struct Node* temp1;
	//copy temp1 value and put it in start
	temp1=start;
	temp1->data=temp;
	//iterate rest of list after leaving the start element 
	for(i=2;i<=n;i++){
		//creation of n new nodes
		struct Node* newNode;
		newNode=(struct Node*)malloc(sizeof(struct Node));
		scanf("%d",&temp);
		//temp values assigned as data for each node
		newNode->data=temp;
		//next contains address of each new node
		temp1->next=newNode;
		//traverse each node one by one, works similar to i++ 
		temp1=temp1->next;
	}
	printf("The elements are\n");
	//temp1 point to start so it can begin from the start of the list
	temp1=start; 
	//loop keep on running until it reach null or the last element of the node
	for(i=1;i<=n;i++){
		printf("%d->",temp1->data);
		//move from one node to next while printing the value of node
		temp1=temp1->next;
	}
}
