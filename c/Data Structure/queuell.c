#include<stdio.h>
#include<stdlib.h>
struct node{
	int ele;
	struct node* nxt;
}*front,*rear;
typedef struct node* queue;
void display(){
	queue temp=front;
	while(temp!=NULL){
		printf("%d\t",temp->ele);
		temp=temp->nxt;
	}
	printf("\n");
}
void enqueue(int x){
	queue nn=malloc(sizeof(struct node));
	nn->ele=x;
	nn->nxt=NULL;
	if(rear==NULL)
		rear=front=nn;
	else{
		rear->nxt=nn;
		rear=nn;
	}
}
void dequeue(){
	queue temp=front;
	if(front==rear)
		front=rear=NULL;
	else
		front=front->nxt;
	free(temp);
}
void main(){
	int x,ch;
	while(1){
		printf("1.enqueue\n2.dequeue\n3.display\n4.exit\nenter ur choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:
					printf("Enter the ele to be inserted:");
					scanf("%d",&x);
					enqueue(x);
					break;
			case 2:dequeue();
					break;

			case 3:display();
				break;
			case 4:exit(0);
			default:printf("Invalid Choice\n");
		}
	}
}