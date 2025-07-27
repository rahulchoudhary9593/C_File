#include<stdio.h>
int main(){
	float p,t,r;
	printf("Enter principle,time and ratio:");
	scanf("%f%f%f",&p,&t,&r);
	printf("simple intrest is %f",p*t*r/100);
	return 0;
}
