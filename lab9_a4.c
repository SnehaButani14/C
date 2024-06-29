#include <stdio.h>
void main(){
	int i=1,factorial=1,n;
	printf("enter a num:");
	scanf("%d",&n);
	while(i<=n){
			factorial=factorial*i;
			i++;
		}
		printf("%d",factorial);
}
