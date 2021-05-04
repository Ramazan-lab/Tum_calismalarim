#include <stdio.h>
#include <cassert>
#include <math.h>
#define M 5
#define N 5
#include <time.h>
#include <stdlib.h>

	int main(){	
	int a[M][N] , b[3][3] , sonuc[M][N];
	int i,j,k,l,T;
	
	srand (time (NULL));
	for( i=0;i<M;i++){
		for( j=0;j<N;j++){
		a[i][j] = rand() %255 + 1;
			
		printf("%9d",a[i][j]);					
	}
	printf("\n");		
	}	
	
	
	for( k=0;k<3;k++){
		for( l=0;l<3;l++){           
		printf("b[%d][%d]=",k,l);		
		scanf("%d",&b[k][l]);
	}		
	printf("\n");		
	}

	
	 
	for( i=0;i<M;i++){
		for( j=0;j<N;j++){	
		sonuc[i][j]=22;					
		}
	}
	
	for(i=1;i<M-1;i++){
		for(j=1;j<N-1;j++){
			T=a[i-1][j-1]*b[0][0]+a[i-1][j]*b[0][1]+a[j-1][j+1]*b[0][2]+a[i][j-1]*b[1][0]+a[i][j]*b[1][1]+a[i][j+1]*b[1][2]+a[i+1][j-1]*b[2][0]+a[i+1][j]*b[2][1]+a[i+1][j+1]*b[2][2];
			sonuc[i][j]=T;	
		}
	}

	
	for( i=0;i<M;i++){
		printf("\n\n\n\n");	
		for( j=0;j<N;j++){	
		printf("%9d",sonuc[i][j]);					
		}
	printf("\n");
	}
/*	for(i=0;i<=M-1;i++){
		for(j=0;j<=N-1;j++){
		printf("%d\t",sonuc[i][j]);	
	}
}
*/	
return 0;
}
