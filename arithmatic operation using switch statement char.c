#include<stdio.h>
#include<conio.h>
int main(){
	float a,b;
	char n;
	//printf("enter the arithmatic operator(+,-,*,/,%) you want to perform:");
	//scanf("%c",&n);
	printf("Enter two number on which you want to perform operation:");
	scanf("%f%f",&a,&b);
	int c=a,d=b;                                                                                          //we can't use modulo in float value so we assign float value into int
	printf("enter the arithmatic operator(+,-,*,/,%) you want to perform:");
	scanf(" %c",&n);                                                                                      //we have given a space before %c , because while in previous we use scanf, compiler also take '\n' automatically and this '\n' is taken as input by %c so we give a space before %c to rectify it. 
	                                                                                                      //There is another method , we can take the %c first then number value as second scanf but for writing many codes ot will not work . 
	switch(n){
		case '+':printf("addition is %f\n",a+b);
		break;
		case '-':printf("substraction is %f\n",a-b);
		break;
		case '*':printf("multiplication is %f\n",a*b);
		break;
		case '/':printf("division is %f\n",a/b);
		break;
		case '%':printf("modulo can't act in float ,so it change into int by codes.\n");
		printf("modulo is %d\n",c%d);
		break;
		default:printf("invalid input\n");
		break;
	}
	printf("THANK YOU\n");
	return 0;
}
