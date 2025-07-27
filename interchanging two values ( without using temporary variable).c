#include<stdio.h>
#include<conio.h>
int main(){
	int a,b;
	printf("enter the values of a and b:\n");
	scanf("%d%d",&a,&b);
	printf("before changing a=%d\t b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after interchanging a=%d\t b=%d\t",a,b);
	return 0;
}



/*
step-1

	a=a+b;
		b=a-b;
		a=a-b;
		
step-2
	
			a=a*b;
	b=a/b;
	a=a/b;
	
step-3

	a=a-b;
	b=a+b;
	a=b-a;
	
step-4

	a=a/b;
	b=a*b;
	a=a/b;
	
*/
