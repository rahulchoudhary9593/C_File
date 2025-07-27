#include<stdio.h>
#include<conio.h>
#include<math.h>
int calculatedigit(int num);
int sumofpowerdigits(int num,int time);
int main(){
	int num,time,sum;
	printf("enter the number:");
	scanf("%d",&num);
	time=calculatedigit(num);
	sum=sumofpowerdigits(num,time);
	printf("Given number is %d\n",num);
	printf("sum of power of digits is %d\n",sum);
	if(num==sum){
		printf("%d is a Armstrong number",num);
	}else{
		printf("%d is not a Armstrong number",num);
	}
	return 0;
}
int calculatedigit(int num){
	int time=0;
	while(num>0){
		num=num/10;
		time++;
	}
	return time;
}
int sumofpowerdigits(int num,int time){
	int digit,sum=0;
	while(num>0){
		digit=num%10;
		num=num/10;
		sum=sum+pow(digit,time);
	}
	return sum;
}
