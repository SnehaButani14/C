#include <stdio.h>
void main(){
	int a[3][3],i,j,cp=0,cn=0,cz=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);
		
		if(a[i][j]>0){
			cp++;
		}
		if(a[i][j]<0){
			cn++;
		}
		if(a[i][j]==0){
			cz++;
		}
	}
		printf("\n");
	}

	printf("cp=%d cn=%d cz=%d",cp,cn,cz);
}
