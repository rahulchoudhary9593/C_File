//print the factorial of number n(4!=4*3*2*1)
#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	
	int fact=1;
	for(int i=1;i<=n;i++){
 	 	fact=fact*i;
	}
	printf("factorial of %d is %d",n,fact);
	return 0;
}
