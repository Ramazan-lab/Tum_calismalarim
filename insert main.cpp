#include <stdio.h>

#define max 50

void insertionsort(int arr[],int size){
	
	int i,j;
	int element;
	
	for(i=1; i<size;i++){
		element =arr[i];
		
		j=i-1;
		
		while (j>=0 && arr[j] > element) {
			
			arr[j+1]=arr[j];
			j--;
				
		}
		arr[j+1]=element;
		
	}	
	
}


int main() {
	
	int array[max],size;
	int i; 
	int j;
	 printf("kac elemanli");
	 scanf("%d",&size);
	 
	 for (i=0; i<size; i++){
	 	
	 	scanf("%d",&array[i]);
	 	
	 }
	 	insertionsort(array,size);
	 	
	 	printf("%d",&array[j]);
	
}

