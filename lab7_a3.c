#include <stdio.h>
void main(){
	int a,b;
	char choice;
	printf("enter a val:");
	scanf("%d %d",&a,&b);
	printf("enter a choice:");
	scanf(" %c",&choice);
	switch(choice){
		case '+' : printf("%d",a+b);
				break;
		case '-' : printf("%d",a-b);
				break;
		case '*' : printf("%d",a*b);
				break;
		case '/' : printf("%d",a/b);
				break;
		default : printf("invalid choice");
				break;
		}
}
