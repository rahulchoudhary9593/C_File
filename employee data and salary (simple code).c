#include <stdio.h>
int main(){
	char name[50];
	gets(name);
	char b[30];
	/*float salary,basic,net,da,hra,tax;
	da=0.15;
	hra=0.1;
	tax=0.05;
	printf("enter name:");
	gets(name);
	printf("enter designation:");
	scanf("%[^\n]%*c",&b);
	printf("enter salary:");
	scanf("%f",&salary);
	da=da*salary;
	hra=hra*salary;
	tax=tax*salary;
	basic=salary-(da+hra+tax);
	net=basic+da+hra-tax;*/
	
	printf("your Name is %s\n",name);
	/*printf("you are working as %s\n",b);
	printf("your salary is%f\n",salary);
	printf("your da,hra and tax in amount is%f\n%f\n%f\n",da,hra,tax);
	printf("your basic salary is%f\n",basic);
	printf("your net salary is%f\n",net);*/
	
	
	return 0;
}
