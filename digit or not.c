//given character a digit or not

#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	printf("Enter the number:");
	scanf("%d",&a);
	(a<=9&&a>=0)?printf("%d is a digit",a):printf("%d is not a digit",a);
	return 0;
}
