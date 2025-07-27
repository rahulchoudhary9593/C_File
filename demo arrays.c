#include<stdio.h>
int main(){
	
	//2x3 matrix
	
	
	/*int arr[][3]={{1,2,3},{4,5,6}};
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}*/
	
	
	//3x3 matrix
	
	/*int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	*/
	
  	int arr[][2]={{1,2,},{3,4},{5,6}};
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

