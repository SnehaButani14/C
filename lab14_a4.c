#include <stdio.h>
void main(){
	int n;
	printf("enter a num:");
	scanf("%d",&n);
	int arr[n],i,max,min,sum=0,avg=0;
	float a;
		for(i=0;i<n;i++){
			printf("enter a val of arr[%d]:");
			scanf("%d",&arr[i]);
				sum=sum+arr[i];
			}
			a=sum/n;	
			max=arr[0];
			min=arr[0];
			
			for(i=0;i<n;i++){
				if(max<arr[i]){
				max=arr[i];
			}
				if(min>arr[i]){
				min=arr[i];
			}
		}
			printf("min=%d max=%d",min,max);
			printf("sum=%d",sum);
			printf("avg=%f",a);
	}


