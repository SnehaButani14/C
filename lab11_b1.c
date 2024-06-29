#include <stdio.h>
void main(){
	int a=0,b=1,c,i,n;	
	printf("enter a num:");
	scanf("%d",&n);
	printf("%d\t %d\t",a,b);
	for(i=1;i<=n;i++){
		c=a+b;
		a=b;
		b=c;
		printf("%d\t",c);
	}
}
