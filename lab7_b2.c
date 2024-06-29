#include <stdio.h>
void main(){
	char c;
	printf("enter a c:");
	scanf("%c",&c);
	(c>='a'&&c<='z')||(c>='A'&&c<='Z')?printf("c is alphabet"):printf("c is not alphabet");
}
