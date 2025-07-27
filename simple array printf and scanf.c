#include<stdio.h>
int main(){
	
	//size of an array
	
	int n;
	printf("Enter size of array (n)");
	scanf("%d",&n);
	int arr[n];
	
	//taking numbers as input
	
	printf("Enter numbers");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	//getting output
	for(int j=0;j<n;j++){
		printf("%d\t",arr[j]);
	}
	return 0;
}
