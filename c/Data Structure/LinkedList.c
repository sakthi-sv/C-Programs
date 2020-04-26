#include<stdio.h>
#include<stdlib.h>
struct node{
	int ele;
	struct node* nxt;
}*h;
typedef struct node list;
void display(){
	list *l;
	l=h;
	while(l!=NULL){
		printf("%d\t",l->ele);
		l=l->nxt;
	}
	printf("\n");
}
list* find(int x){
	list* temp=h;
	while(temp!=NULL){
		if(temp->ele==x)
			return temp;
		temp=temp->nxt;
	}
	return temp;
}
list* findprev(int x){
	list* l=h;
	while(l!=NULL){
		if(l->nxt->ele==x)
			return l;
		l=l->nxt;
	}
	return l;
}
void insert_beg(int x){
	list* nn;
	nn=malloc(sizeof(struct node));
	nn->ele=x;
	
	if(h==NULL){
		nn->nxt=NULL;
		h=nn;
	}
	else{
		nn->nxt=h;
		h=nn;
	}
		
}
void insert_end(int x){
	list* nn;
	nn=malloc(sizeof(struct node));
	nn->ele=x;
	if(h==NULL){
		nn->nxt=NULL;
		h=nn;
	}
	else{
		list* l;
		l=h;
		while(l->nxt!=NULL)
			l=l->nxt;
		l->nxt=nn;
		nn->nxt=NULL;
	}
}
void insert_mid(int x,int y){
	list* p=find(y);
	list* nn;
	nn=malloc(sizeof(struct node));
	nn->ele=x;
	nn->nxt=p->nxt;
	p->nxt=nn;
	
}
void delete(int x){
	list* p=findprev(x);
	list* temp=p->nxt;
	if(h->ele==x){
		list* temp=h;
		h=h->nxt;
	}
	else if(p!=NULL){
		p->nxt=temp->nxt;
	}
	free(temp);
}
void main()
{
	int x,y,ch;
	while(1){
		printf("1.insert_beg\n2.display\n3.insert_end\n4.insert_mid\n5.delete\n6.exit\nenter ur choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:
					printf("Enter the ele to be inserted:");
					scanf("%d",&x);
					insert_beg(x);
					break;
			case 2:display();
					break;

			case 3:printf("Enter the ele to be inserted:");
					scanf("%d",&x);
				insert_end(x);
				break;
			case 4:printf("Enter the ele to be inserted nd the ele after which it has to be inserted:");
					scanf("%d%d",&x,&y);
				insert_mid(x,y);
					break;
			case 5:printf("enter the ele to be deleted");
					scanf("%d",&x);
					delete(x);
					break;
			case 6:exit(0);
			default:printf("Invalid Choice\n");
		}
	}
	
}