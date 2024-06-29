#include <stdio.h>
void main(){
	int n,i=1;
	printf("enter a num:");
	scanf("%d",&n);
	while(i<=n){
		if(i%2!=0){
		printf("%d\n",i);
	}
	i=i+1;
	}
}
