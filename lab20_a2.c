#include <stdio.h>
struct{
	char bookname[2];
	
		
};
void main(){
	int a;
	struct book a1;
	scanf("%s",&a1.bookname);
	scanf("%s",&a1.booktitle);
	scanf("%s",&a1.author);
	scanf("%s",&a1.publication);
	scanf("%f",&a1.price);
	printf("%s",a1.bookname);
	printf("%s",a1.booktitle);
	printf("%s",a1.author);
	printf("%s",a1.publication);
	printf("%f",a1.price);
}
