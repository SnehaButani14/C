#include <stdio.h>
void main(){
	int a1[5],a2[5],count=0,i;
	float height,weight;
	for(i=0;i<5;i++){
		printf("enter a arr[%d]:",i);
		scanf("%f %f",&a1[i],a2[i]);
		if(height>170){
			if(weight<50){
				count++;
			}
		}
	}
	printf("%d",count);	
}
