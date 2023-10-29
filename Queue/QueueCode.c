#include <stdio.h>
#include <conio.h>

int queue[100];
int SIZE;
int front=-1, rear=-1;
int element, i;
void enqueue(int element)
{
	//check if queue already full
	if(rear==SIZE-1){
		printf("Queue overfkow error!\n");
	}else{
		//increment rear to next available empty space
		rear++;
		//add the element to the avaialable empty space
		queue[rear]=element;
		printf("Enqueue element is %d\n", element);
		//check if element entered is first element of the queue
		if(front==-1){
			//make sure front remain 0 until enqueue operation is being performed
			front=0;
		}
	}
}
void dequeue()
{
	//check if queue aleady empty
	if(front==-1){
		printf("Queue underflow error!\n");
	}else{
		printf("Dequeue element is %d\n",queue[front]);
		//incerement front so elements are dequeued in order
		front++;
	}
	//when front=rear last element reached in queue
	printf("%d",queue[front]);
}
void showQueue()
{
	//make sure front and rear are both not the last element of the queue
	while(front<rear){
		//dequeue and print elements in order
		printf("%d ",queue[front]);
		front++;
	}
	printf("%d ",queue[front]);
}
int main(){
	int choice, k=1, element;
	printf("Enter size fo the queue\n");
	scanf("%d\n",&SIZE);
	do
	{
		printf("1 to enqueue\n2 to dequeue\n3 to show queue\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter element to enqueue\n");
				scanf("%d",&element);
				enqueue(element);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				showQueue();
				break;
			default:
				printf("Invalid option chosen\n");
				break;
		}
		printf("\nDo you wish to continue? 1 for Yes 2 for No\n");
		scanf("%d",&k);
	}while (k==1);
	return 0;
}
