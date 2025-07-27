#include<stdio.h>
#include<conio.h>
int main() {
	char a[50],b[50],c[50];
	float salary,basic,net,da,hra,ta,tax;
	printf("Enter employee name:");
	scanf("%[^\n]%*c",&a);
	printf("You are working as:");
	scanf("%[^\n]%*c",&b);
	printf("Enter employee number:");
	scanf("%[^\n]%*c",&c);                                    //we can also write "gets(variable);" statement instead of scanf"("%[^\n]%*c",&variable);" statement
	printf("Enter salary:");
	scanf("%f",&salary);
	printf("Enter DA,HRA,TA in percentage:");
	scanf("%f%f%f",&da,&hra,&ta);
	da=da/100;
	hra=hra/100;
	ta=ta/100;
	da=salary*da;
	hra=salary*hra;
	ta=salary*ta;
	if(salary<300000){
	tax=salary*0;	
	}
	else if(salary<700000){                       //(salary>=300000 && salary<700000) no need to write this because if it will be less than 300000, then first statement will be print and it will not come to else if statement
	tax=salary*0.05;	
	}
	else if(salary<1000000){
	tax=salary*0.1;	
	}else {
	tax=salary*0.15;	
	}
	basic=salary-(da+hra+ta+tax);
	net=basic+da+hra+ta-tax;
	printf("Your name is %s\n",a);
	printf("You are working as %s\n",b);
	printf("Your employee number is %s\n",c);
	printf("Your DA, HRA and TA is %f %s %f %s %f\n", da,"and", hra,"and", ta);             //printf("Your DA is %f, HRA is %f and TA is %f\n", da, hra, ta);          	//printf("Your DA,HRA,TA is %f%f%f\n",da,hra,ta);

	printf("Your tax is %f\n",tax);
	printf("Your Basic salary is %f\n",basic);
	printf("Your net salary is %f\n",net);
	printf("THANK YOU");
	return 0;
}
