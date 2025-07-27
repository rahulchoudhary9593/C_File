#include<stdio.h>
#include<conio.h>
int main(){
	int num,digit,sum=0;
	printf("Enter the number:");
	scanf("%d",&num);
	check:
	while(num!=0){
		digit=num%10;
		sum=sum+digit*digit;
		num=num/10;
	}
	printf("sum is %d",sum);
	if(sum==1){
		printf("it is a happy number");
	}else{
			num=sum;
			goto check;
    }
	return 0;
}
