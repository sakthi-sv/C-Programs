#include<stdio.h>
void spiral(int r,int c,int a[10][10]){
	int i,j,k,m=0,n=0;
	while(m<r && n<c){
		for(i=n;i<c;i++)
			printf("%d\t",a[m][i]);
		m++;

		for(i=m;i<r;i++)
			printf("%d\t",a[i][c-1]);
		c--;
		if(m<r){
			for(i=c-1;i>=n;i--)
				printf("%d\t",a[r-1][i]);
			r--;
		}
		if(n<c){
			for(i=r-1;i>=m;i--)
				printf("%d\t",a[i][n]);
			n++;
		}	
	}
}
void main(){
	int r,c,a[10][10];
	scanf("%d%d",&r,&c);
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	spiral(r,c,a);
}