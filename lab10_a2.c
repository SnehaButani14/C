#include <stdio.h>
void main(){
	int n,sum=0,i=1,a;
	float avg;
	printf("enter a num:");
	scanf("%d",&n);
	while(i<=n){
		scanf("%d",&a);
		sum=sum+a;
		i++;
	}
		avg=sum/n;
		printf("%d %f",sum,avg);
}
