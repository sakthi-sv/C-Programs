#include<stdio.h>
void main(){
	int n,N,i,j;
	scanf("%d",&n);//largest possible no.
	N=2*n-1;       //dimension
	for(i=0;i<N;i++){
		for (j = 0; j < N; j++)
			if(i+j<N)
				printf("%d ",(i<j)?n-i:n-j);
			else
				printf("%d ",(i>=j)?n-(N-i)+1:n-(N-j)+1);
		printf("\n");
	}
}