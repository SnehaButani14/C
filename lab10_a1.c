#include <stdio.h>
void main(){
	int n,last,sum=0;
	printf("enter a num:");
	scanf("%d",&n);
	last=n%10;
	while(n>10){
		n=n/10;
	}
	sum=last+n;
	printf("%d",sum);
}
