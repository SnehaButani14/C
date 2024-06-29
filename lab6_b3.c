#include <stdio.h>
void main(){
	int a,b,c;
	printf("enter a val:");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b&&a==c){
		printf("equilateral triangle");	
	}
	else if(a==b||b==c||a==c){
		printf("isosceles triangle");
	}
	else if(a!=b&&a!=c){
	printf("scalene triangle");
	}
	else{
		printf("invalid");
	}
	
}

