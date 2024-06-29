#include <stdio.h>
void maxmin(int,int);
void main(){
	int a,b,max,min;
	printf("enter a num:");
	scanf("%d %d",&a,&b);
	maxmin(a,b);	
}
void maxmin(int a,int b){
	if(a>b){
		printf("max=%d min=%d",a,b);
	}
	else{
		printf("max=%d min=%d",b,a);
	}
}

