#include<stdio.h>
#include<conio.h>
#include<string.h>
int col,row;
int getrow(char[]);
void display(char[]);
int search(char[],char[]);
int searchright(char s[],int index,char sub[]);
int searchbottom(char s[],int index,char sub[]);
int main(){
	char s[100],sub[20];
	printf("String:");
	scanf("%s",s);
	printf("subStr:");
	scanf("%s",sub);
	printf("col:");
	scanf("%d",&col);
	display(s);
	if(!search(s,sub))
		printf("-1");

return 0;
}

int getrow(char s[]){
	int l=strlen(s);
	return l/col +((l%col==0)?0:1);
}
void display(char s[]){
	int temp=0;
	
	row=getrow(s);
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++)
			printf("%c",s[temp++]);
		printf("\n");
	}
	
}
int search(char s[],char sub[]){
	int l=strlen(s),lsub=strlen(sub),i=0;
	while(i+lsub<l){
		if(s[i]==sub[0])
			if(col-(i%col)>=lsub && searchright(s,i,sub))return 1;
			else if(row-((i/col)%row) >=lsub && searchbottom(s,i,sub))return 1;
			else i++;
		else i++;
	}
			return 0;
}
int searchright(char s[],int index,char sub[]){
	int i,temp;
	int l=strlen(sub);
	for(i=index,temp=0;temp<l;temp++,i++){
		if(s[i]==sub[temp])
			continue;
		else
			return 0;
	}
	i--;
	printf("%d,%d\n",index/col,index%col);
	printf("%d,%d\n",i/col,i%col);
}
int searchbottom(char s[],int index,char sub[]){
	int i,l=strlen(sub),temp=0;
	for(i=index;temp<l;temp++,i+=col){
		if(s[i]==sub[temp])
			continue;
		else
			return 0;
	}
	i-=col;
	printf("%d,%d\n",index/col,index%col);
	printf("%d,%d\n",i/col,i%col);
}