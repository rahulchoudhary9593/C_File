#include<stdio.h>
int factorial(int n);
int main(){
	printf("sum is %d",factorial(5));
	return 0;
}
int factorial(int n){
	if (n==1){
		return 1;
	}
	int factnm1=factorial(n-1);              //factnm1= sum(n-1)
	int fact=n*factnm1;
	return fact;
}
