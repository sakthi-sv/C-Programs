#include<stdio.h>
#include<string.h>
void main(){
	int i,j,l,r,n;
	char s[100];
	scanf("%s",s);
	n=strlen(s);
	printf("%d",n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j ||(i+j)==n-1)
				printf("%c",s[i]);
			else
				printf(" ");
		}
		printf("\n");
	}
}