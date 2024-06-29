#include <stdio.h>
void main(){
	int a,b,c;
	printf("enter a val:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		if(a>c){
			printf("c is largest num");
		}
		else{
			printf("a is largest num");
		}
	}
	else{
		if(b>c){
			printf("c is largest num");
	}
	else{
		printf("b is largest num");
	}
}
}
