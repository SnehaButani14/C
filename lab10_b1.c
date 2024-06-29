#include <stdio.h>
void main(){
	int n,sum=0,i=1;
	printf("enter a val:");
	scanf("%d",&n);
	while(i<n){
		if(n%i==0){
			sum=sum+i;
		}
		i++;
	}
	if(sum==n){
		printf("perfet num");
	}
	else{
		printf("not perfet num");
	}
}
