#include <stdio.h>
void main(){
	int n;
	printf("enter a size of array:");
	scanf("%d",&n);
	int arr[n],i,positive=0,negative=0;
	for(i=0;i<n;i++){
			printf("enter a val of arr[%d]",i);
			scanf("%d",&arr[i]);
		}
		for(i=0;i<n;i++){
			if(arr[i]>=0){
			 	positive++;
			}
			else{
				negative++;
			}
		}
		printf("%d %d",positive,negative);
}
