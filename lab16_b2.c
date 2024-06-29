#include <stdio.h>
void main(){
	int m,n;
	printf("enter a size of array m and n:");
	scanf("%d %d",&m,&n);
	int a[m][n],b[m][n],c[m][n],i,j;	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("a=[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("b=[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		} 
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			c[i][j]=a[i][j]*b[i][j];
		}	
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
