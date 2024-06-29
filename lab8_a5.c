#include <stdio.h>
void main(){
	int n,oc=0,ec=0,i=1;
	while(i<=10){
		scanf("%d",&n);
		if(i%2==0){
			ec++;
		}
		else{
			oc++;
		}
		i++;
	}
	printf("%d\t",oc);
	printf("%d",ec);
}
