#include <stdio.h>
	void main(){
		int n;
		printf("enter a size of array:");
		scanf("%d",&n);
		int arr[n],i;
			for (i=0;i<n;i++){
				scanf("%d",&arr[i]);
			}
			for(i=0;i>=n;i--){
				printf("arr[%d]:%d\n",i,arr[i]);
			}
	}
