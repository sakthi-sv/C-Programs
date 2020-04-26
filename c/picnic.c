//no. of students					8
//students compatibility factor		1 2 1 1 1 1 1 1
// o/p:no. of grp					3 {1,2,1}{1,1}{1,1,1}

#include<stdio.h>
int main(){
	int n,a[100],i,j,g=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
		for(j=0;j<n-1;j++){
			if(a[j]==a[j+1]){
				++g;
				++j;
			}
			else if(j>0 && a[j-1]==a[j+1]){
				++g;
				j++;
			}
		}
	
	printf("%d",g);
}