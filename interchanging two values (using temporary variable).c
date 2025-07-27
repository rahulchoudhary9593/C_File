#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,temp;
	printf("enter the values of a and b:\n");
	scanf("%d%d",&a,&b);
	printf("before changing a=%d\t b=%d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("after interchanging a=%d\t b=%d\t",a,b);
	return 0;
}
