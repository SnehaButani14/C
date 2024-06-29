#include <stdio.h>
void max(int,int,int);
void main(){
	int a,b,c;
	printf("enter a num:");
	scanf("%d %d %d",&a,&b,&c);
	max(a,b,c);
}
void max(int a,int b,int c){
	if(a>b){
		printf("a is largest num");
	}
	else if(b>c){
		printf("b is largest num");
	}
	else if(c>a){
		printf("c is largest num");
	}
}
