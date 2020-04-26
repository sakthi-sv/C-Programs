#include<stdio.h>
void main(){
	char ch,i,j,k;
	scanf("%c",&ch);
	printf("\n");
	if(ch>='a' && ch<='z')
		ch=ch-32;
	for(i='A';i<=ch;i++){
		printf("%*s",ch-i,"");
	for(j='A';j<=i;j++)
		printf("%c",j);
	for(k=i-1;k>='A';k--)
		printf("%c",k);
	printf("\n");
	}
}