#include <stdio.h>
void main(){
	int m,n;
	printf("enter a size of array m and n:");
	scanf("%d %d",&m,&n);
	int a[m][n],b[m][n],i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("matrix:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				b[j][i]=a[i][j];
			}
		}
	printf("Transpose matrix:\n");	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");	
	}
}
