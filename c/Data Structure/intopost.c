//infix to postfix using array implementation of stack
#include<stdio.h>
#include<string.h>
#define m 20

int top=-1;
char expr[m],stack[m],post[m];
void push(char sy);
char pop();
char Top();
int priority(char sy);
void main(){
	int l,i;
	printf("Enter an expr:");
	scanf("%s",expr);
	l=strlen(expr);
	for(i=0;i<l;i++){
		if(expr[i]>='a' && expr[i]<='z')
			printf("%c",expr[i]);
		else if(expr[i]=='(')
			push(expr[i]);
		else if(expr[i]==')'){
			while(Top()!='(')
				printf("%c",pop());
				pop();
		}
		else{
			while(priority(expr[i])<=priority(Top()) && top!=-1)
				printf("%c",pop());
			push(expr[i]);
		}
	}
	for(i=top;i>=0;i--)
		printf("%c",pop());
}
void push(char sy){
	stack[++top]=sy;
}
char pop(){
	char e=Top();
	top--;
	return e;
}
char Top(){
	return stack[top];
}
int priority(char sy){
	int p;
	switch(sy){
		case '(':p=0;
				break;
		case '+':
		case '-':p=1;
				break;
		case '*':
		case '/':
		case '%':p=2;
				break;
		case '^':p=3;
				break;
	}
	return p;
}