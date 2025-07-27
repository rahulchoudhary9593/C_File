//program to interchange row and columns in a 3x3 matrix

#include<stdio.h>
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
	
//main code for changing row and column
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			if(i<j){
				int temp=arr[i][j];
				arr[i][j]=arr[j][i];
				arr[j][i]=temp;
			}
		}
	}
	
//again read the new matrix
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
