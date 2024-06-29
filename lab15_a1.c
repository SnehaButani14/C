#include <stdio.h>
void main(){
	int n;
	printf("enter a size of array:");
	scanf("%d",&n);
	int a[n],b[n],i;
	for(i=0;i<n;i++){
		printf("enter a val of arr[%d]",i);
		scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++){
			b[i]=a[i];
		}
		for(i=0;i<n;i++){
			printf("enter a in b[%d]:%d\n",i,b[i]);
		}
}
