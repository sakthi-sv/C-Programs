#include<stdio.h>
#include<stdlib.h>
struct node
{
	int ele;
	struct node* nxt;
};
typedef struct node* list;

struct node* head;

void display(){
	list l=head->nxt;
	while(l!=NULL){
		printf("%d\n",l->ele);
		l=l->nxt;
	}
}

void push(int x){
	struct node* temp;
	temp=malloc(sizeof(struct node));
	if(temp!=NULL){
		temp-> ele=x;
		temp-> nxt=head -> nxt;
		head->nxt=temp;
	}
	display();
}

void pop(){
	struct node* temp;
	temp=malloc(sizeof(struct node));
	temp=head->nxt;
	head->nxt=temp->nxt;
	free(temp);
	display();
}
void main(){
	int x,ch;
	head=malloc(sizeof(struct node*));
	head->nxt=NULL;
	while(1){
		printf("1.push\n2.display\n3.pop\n4.exit\nenter ur choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:
					printf("Enter the ele to be inserted:");
					scanf("%d",&x);
					push(x);
					break;
			case 2:display(head);
					break;

			case 3:pop();
				break;
			case 4:exit(0);
			default:printf("Invalid Choice\n");
		}
	}
}