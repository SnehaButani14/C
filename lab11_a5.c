#include <stdio.h>
void main(){
	int n,i,factorial;
	printf("enter a num:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		factorial=factorial*i;
		}
		printf("%d",factorial);
}
