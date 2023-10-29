#include <stdio.h>
#include <stdlib.h>

//define the structure of the node
struct Node{
	int data;
	//point to next node in the structure
	struct Node* next;
};
void main(){
	//start pointer to point to first node in the linked list
	struct Node* start;
	//type case start and dynamincally allocate memory to it
	start=(struct Node*)malloc(sizeof(struct Node));
	//creation of new node
	struct Node* newNode;
	newNode=(struct Node*)malloc(sizeof(struct Node));
	//manually adding data into the new node
	newNode->data=10;
	//creation of the second node in list
	struct Node* newNode1;
	newNode1=(struct Node*)malloc(sizeof(struct Node));
	newNode1->data=20;
	newNode->next=newNode1;
	struct Node* newNode2;
	newNode2=(struct Node*)malloc(sizeof(struct Node));
	newNode2->data=30;
	newNode1->next=newNode2;
	newNode2->next=NULL;
	printf("%d->%d->%d->NULL",newNode->data,newNode1->data,newNode2->data);
}
