#include <stdio.h>
void main(){
	int n,flag=0,i=1;
	printf("enter a val:");
	scanf("%d",&n);
	while(i<n){
		if(n%i==0){
			flag=flag+i;
		}
		i++;
	}
	if(flag==n){
		printf("perfet num");
	}
	else{
		printf("not perfet num");
	}
}
