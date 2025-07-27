#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	printf("enter the no of rows till you want to print:");
	scanf("%d",&n);
	for(int row=1;row<=n;row++){
		for(int space=1;space<=n-row;space++){
				printf(" ");
			}
		for(int star=1;star<=row;star++){
			
			printf("* ");
			
		}
		printf("\n");
	}
	return 0;
}
