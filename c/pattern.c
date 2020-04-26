#include<stdio.h>
void main(){
	int n,i,j,k;
	char* a="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char* x="************************";
	char* y="*A*A*A*A*A*A*A*A*A";
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}

	for(i=1;i<=n;i++){
		for(j=1;j<=2*(n-i);j++)
			printf(" ");
		for(k=1;k<=i;k++)
			printf("* ");
		printf("\n");
	}

	/*for(i=1;i<=n;i++)
		printf("%*.*s\n",i,i,a);

	for(i=1;i<=n;i++)
		printf("%*.*s\n",n,i,a);

	for(i=1;i<=n;a+=i,i++)
		printf("%*.*s\n",i,i,a);

	for(i=1;i<=n;a+=i,i++)
		printf("%*.*s\n",n,i,a);*/
	for(i=1;i<=n;i++)
		printf("%*.*s\n",n+i-1,2*i-1,x);
	for(i=1;i<=n;i++)
		printf("%*.*s\n",n+i-1,2*i-1,a);

	for(i=1;i<n;i++)
		printf("%*.*s\n",n+i-1,2*i-1,x);
	for(i=n;i>=1;i--)
		printf("%*.*s\n",n+i-1,2*i-1,x);



	for(i=0;i<2*n;i+=2)
		printf("%*.*s\n",2*n+i,2*i+1,y);
}