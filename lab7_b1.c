#include <stdio.h>
void main(){
	int a,b,c,result,largest;
	printf("enter a num:");
	scanf("%d %d %d",&a,&b,&c);
	largest=(a>b)?((a>c)?printf("a is largest num"):printf("c is largest num")):((b>c)?printf("b is largest num"):printf("c is largest num"));
	result=largest*c;
	printf("%d",result);
}
