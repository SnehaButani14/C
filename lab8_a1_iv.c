#include <stdio.h>
void main(){
	int n,i=1;
	printf("enter a num:");
	scanf("%d",&n);
	do{
		printf("%d\n",i);
		i++;
	}
	while(i<=n);
}
