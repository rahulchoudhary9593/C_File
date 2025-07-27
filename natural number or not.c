//given number a natural number or not

#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	printf("Enter the number:");
	scanf("%d",&a);
	if(a>0){
		printf("%d is a natural number",a);
	}else{
		printf("%d is not a natural number",a);
	}
	return 0;
}
