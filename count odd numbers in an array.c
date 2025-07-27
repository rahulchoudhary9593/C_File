#include<stdio.h>
int countodd(int arr[3][3]);
int main(){
	int arr[3][3];
	// take elements as input
	printf("Enter the elements of a matrix:");
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
//read the matrix
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	countodd(arr[int i][int j]);
	return 0;
}



int countodd(int arr[3][3]){
	int count=0;
	for(int i=0;i<=n-1;i++){
		for(int j=0;j<=n-1;j++){
		if(arr[i][j]%2!=0){
			count++;
		}
		}
	}
}
