#include<stdio.h>
#include<math.h>
int main(){
	double a,b,power;                              //Declared a, b, and power as double to avoid truncation.
	printf("enter a and b for a^b:");
	scanf("%lf%lf",&a,&b);                         //Used %lf format specifier to read double values.
	power=pow(a,b);
	printf("a^b=%.2f",power);                      //Printed the result with two decimal places using %.2f
	return 0;
}
