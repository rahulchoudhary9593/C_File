//table of a number using loop
#include<stdio.h>
#include<conio.h>
int main(){
	int num,multi;
	printf("Enter a number:");
	scanf("%d",&num);
	for(int i=1;i<=10;i++){
		multi=i*num;
		printf("%d * %d=%d\n",num,i,multi);
	}
	return 0;
}
