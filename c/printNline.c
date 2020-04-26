#include<stdio.h>
void main(){
	int n,k=1;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++)
			printf("%d ",k++);
		printf("\n");
	}
}
