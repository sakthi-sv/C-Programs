#include<stdio.h>
void main()
{
	int n,i,j,s,l,m;
	scanf("%d",&n);
	s=1;
	m=2*n-1;
	l=2*m-1;
	for(i=0;i<n;i++){
		for(j=1;j<=l;j++){
			if(((s+i)==j)||((m-i)==j)||((m+i)==j)||((l-i)==j))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}