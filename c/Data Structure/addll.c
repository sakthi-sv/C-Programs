#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
	int ele;
	struct node* nxt;
}*h1,*h2,*h3;
typedef struct node list;


void display(){
	list *l;
	l=h1;
	while(l!=NULL){
		printf("%d\t",l->ele);
		l=l->nxt;
	}
	printf("\n");
	l=h2;
	while(l!=NULL){
		printf("%d\t",l->ele);
		l=l->nxt;
	}
	printf("\n");
	l=h3;
	while(l!=NULL){
		printf("%d\t",l->ele);
		l=l->nxt;
	}
	printf("\n");
}
void insert(int x){
	struct node* nn;
	nn=malloc(sizeof(struct node));
	nn->ele=x;
	if(h1==NULL){
		nn->nxt=NULL;
		h1=nn;
	}
	else{
		nn->nxt=h1;
		h1=nn;
	}
		
}
void insert2(int x){
	struct node* nn;
	nn=malloc(sizeof(struct node));
	nn->ele=x;
	if(h2==NULL){
		nn->nxt=NULL;
		h2=nn;
	}
	else{
		nn->nxt=h2;
		h2=nn;
	}
		
}
void add(){
	int cy=0;
	list *it1=h1,*it2=h2;
	while(it1!=NULL || it2!=NULL){
		struct node* nn;
		nn=malloc(sizeof(struct node));
		nn->ele=it1->ele+it2->ele;
		it1=it1->nxt;
		it2=it2->nxt;
		if(cy==1){
			nn->ele+=1;
			cy--;
		}
		if(nn->ele>=10){
			nn->ele=nn->ele-10;
			cy=1;
		}
		if(h3==NULL){
			nn->nxt=NULL;
			h3=nn;
		}
		else{
		list* l;
		l=h3;
		while(l->nxt!=NULL)
			l=l->nxt;
		l->nxt=nn;
		nn->nxt=NULL;
	}
	}
}
void main(){
	int i,l;
	char a[50],b[50];
	scanf("%s%s",a,b);
	for(i=0;a[i]!='\0';i++)
		insert(a[i]-'0');
	for(i=0;b[i]!='\0';i++)
		insert2(b[i]-'0');
	display();
	add();
	display();
}