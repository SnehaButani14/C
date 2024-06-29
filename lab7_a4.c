#include <stdio.h>
void main(){
	int a,b,c;
	printf("enter a num:");
	scanf("%d %d %d",&a,&b,&c);
	a>b?((a>c)?printf("a is largest num"):printf("c is largest num")):((b>c)?printf("b is largest num"):printf("c is largest num"));
}
