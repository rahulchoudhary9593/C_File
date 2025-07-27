#include<stdio.h>
int digitsum(int num);
int main(){
	int n;
	printf("enter a number");
	scanf("%d",&n);
	int ans=digitsum(n);
	printf("%d",ans);
	return 0;
}

int digitsum(int num){
	int digit,sum=0;
	while(num>0){
		digit=num%10;
		sum=sum+digit;
		num=num/10;
	}
	return sum;
}
