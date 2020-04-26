#include<stdio.h>
int isprime(int n){
	for(int i=2;i<n;i++)
		if(n%i==0)
			return 0;
	return 1;
}
void sumofprime(int n,int a[]){
	for(int i=0;i<n;i++){
		//if(n<2*k)
		if(a[i]%2==0)
			printf("yes\n");
		else if(isprime(a[i]-2))
			printf("yes\n");
		else printf("no\n");
	}
}
void main(){
	int n,a[25];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	sumofprime(n,a);
}