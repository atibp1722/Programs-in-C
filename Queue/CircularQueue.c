#include <stdio.h>
#include <conio.h>

int queue[100];
int SIZE;
int front=-1, rear=-1;

void enqueue(int element){
	if(front==-1 && rear ==-1){
		front=rear=0;
		queue[rear]=element;
	}else if( (rear+1)%SIZE==front ){
		printf("Queue overflow error");
	}else{
		rear = (rear+1)%SIZE;
		queue[rear]=element;
	}
}

void dequeue(){
	if(front==-1){
		printf("Queue underflow error");
	}else if(front==rear){
		front=rear=-1;
	}else{
		front = (front+1)%SIZE;
	}
}

void display(){
	int i = front;
	while(i!=rear){
		printf("%d ",queue[i]);
		i = (i+1)%SIZE;
	}
	printf("%d",queue[rear]);
}

void main(){
	int choice, k=1, element;
	printf("Enter size of queue\n");
	scanf("%d",&SIZE);
	do{
		printf("1 to enqueue \n2 to dequeue \n3 to display\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter element to enqueue\n");
				scanf("%d",&element);
				enqueue(element);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			default:
				printf("Invalid option\n");
				break;
		}
		printf("\nDo you wish to continue. 1 for YES 2 for NO\n");
		scanf("%d",&k);
	}while(k==1);
}
