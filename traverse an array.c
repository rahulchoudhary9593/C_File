#include<stdio.h>
int main(){
	int aadhar[5];
	
	int *ptr=&aadhar[0];
	printf("Enter 5 numbers");
	for(int i=0;i<5;i++){
		scanf("%d",ptr+i);
	}
	printf("\n");
	for(int j=0;j<5;j++){
		printf("%d\t",*(ptr+j));
	}
	return 0;
}
