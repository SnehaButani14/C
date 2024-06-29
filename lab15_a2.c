#include <stdio.h>
void main(){
	int n;
	printf("enter a size of array:");
	scanf("%d",&n);
	int a[n],i,cn=0;
		for(i=0;i<n;i++){
			printf("enter a val of arr[%d]",i);
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++){
			if(a[i]<0){
				cn++;
			}	
		}
		printf("%d",cn);
}
