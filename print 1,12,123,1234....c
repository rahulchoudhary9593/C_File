#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	printf("enter the no of rows till you want to print:");
	scanf("%d",&n);
	for(int row=1;row<=n;row++){
		for(int nums=1;nums<=row;nums++){
			printf("%d",nums);
		}
		printf("\n");
	}
	return 0;
}
