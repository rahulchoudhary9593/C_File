#include<stdio.h>
int main(){
	float a,b,c;
	printf("enter three numbers:");
	scanf("%f%f%f",&a,&b,&c);
	printf("sum of three numbers is %f\n",a+b+c);
	printf("sum of three numbers is %f\n",(a+b+c)/3);
	return 0;
}
