//sum of numbers 5 to 50 including 5 and 50
#include<stdio.h>
#include<conio.h>
int main(){
	int sum=0;
	for(int i=5;i<=50;i++){
		sum+=i;
	}
	printf("sum is %d",sum);
	return 0;
}
